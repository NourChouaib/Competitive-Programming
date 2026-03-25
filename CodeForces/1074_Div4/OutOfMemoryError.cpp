#include<bits/stdc++.h>

using ll = long long;
using namespace std;

int solve(){
    ll n,m,h; cin >> n >> m >> h;

    vector <pair<ll,ll>> g(n);
    vector <ll> a(n); for(int i = 0; i < n; i++) {
        ll x;cin >> x;
        a[i] = x;
        g[i]= {x,0};
    }

    int lastReset = 0;
    int currentTime = 0;
    for(int i = 0; i < m; i++){
        ll b,c; cin >> b >> c;
        b--;
        currentTime++;
        
        int lastTimeModified = g[b].second;

        if (lastTimeModified < lastReset){
            g[b].first = a[b];
        }

        if(g[b].first + c > h){
            g[b].first = a[b];
            lastReset = currentTime;
        }else{
            g[b].first += c;
        }

        g[b].second = currentTime;
    }

    for(int i = 0; i < n; i++){
        if(g[i].second < lastReset){
            g[i].first = a[i];
        }
        cout << g[i].first << " ";
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