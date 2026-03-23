#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    cout << n/10 + n%10<< endl;
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}