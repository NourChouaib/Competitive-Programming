#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<pair<int,int>> a(n*n+1,{0,0});
    for(int i = 1; i < n*n + 1; i++){
        int x; cin >> x;
        a[x].second++;
    }

    for(int i = 1; i < n*n + 1; i++){
        if(a[i].second > (n*(n-1))){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}