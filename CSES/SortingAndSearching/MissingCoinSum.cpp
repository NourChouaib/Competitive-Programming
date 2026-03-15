#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<long long> a(n,0);
    for(int i = 0; i < n; i++){
        long long x; cin >> x;;
        a[i] = x;
    }
    sort(a.begin(),a.end());

    long long sum = 0;
    for(int i = 0; i < n; i++){
        if (sum+1 < a[i]){
            cout << sum + 1 << endl;
            return 0;
        }else{
            sum += a[i];
        }
    }
    cout << sum + 1 << endl;

    return 0;
}

int main(){
    solve();
    return 0;
}
