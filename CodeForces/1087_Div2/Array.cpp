#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector <long long> a(n);
    for(auto &x:a){
        cin >> x;
    }

    for (int i = 0; i < n; i++){
        int countLess = 0;
        int countGreat = 0;
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                countLess++;
            }else if(a[i] < a[j]){
                countGreat++;
            }
        }
        cout << max(countLess,countGreat) << " ";
    }
    cout << "\n";
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}