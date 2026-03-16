#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,m,x,y; cin >> n >> m >> x >> y;
    vector<long long> a(n); for(auto &x : a) cin >> x;
    vector<long long> b(m); for(auto &x : b) cin >> x;
    cout << m + n << endl;
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
