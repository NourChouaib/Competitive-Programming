#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;
 
 
void solve(){
    int n,x; cin >> n >> x;
    vector <ll> coins(n); for(auto &x:coins){cin >> x;}
    vector <ll> dp(x + 1,0);
    
    sort(coins.begin(),coins.end());
    for(int i = 0; i < n; i++){
        if(coins[i] <= x){
            dp[coins[i]] = 1;
        }
    }
 
 
    for(int i = 1; i <= x; i++){
        for(auto coin : coins){
            if(coin < i){
                dp[i] += dp[i - coin];
            }
        }
        dp[i] = dp[i] % MOD;
    }
 
    cout << dp[x] << "\n";
 
    
}
 
int main(){
    solve();
    return 0;
}