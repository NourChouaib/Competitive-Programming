#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<long long> a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    sort(a.begin(),a.end());
    
    auto last = unique(a.begin(), a.end());
    a.erase(last, a.end());
    int m = a.size();

    int maxCount = 1;
    int count = 1;
    for(int i = 0; i < m - 1; i++){
        if (a[i] + 1 == a[i + 1]){
            count++;
            if (count > maxCount) maxCount = count;
        }else{
            count = 1;
        }
    }
    cout << maxCount << endl;
    return 0;
    
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}