#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;
 
 
void solve(){
    int n,x; cin >> n >> x;
    vector <ll> coins(n); for(auto &x:coins){cin >> x;}
    vector <ll> dp(x + 1,0);
    
    sort(coins.begin(),coins.end());
 
 
    dp[0] = 1;
    for(auto coin : coins){
        for(int i = 1; i <= x; i++){
            if(coin <= i){    
                dp[i] += dp[i - coin];
            }
            dp[i] = dp[i] % MOD;
        }
    }
 
    cout << dp[x] << "\n";
 
    
}
 
int main(){
    solve();
    return 0;
}