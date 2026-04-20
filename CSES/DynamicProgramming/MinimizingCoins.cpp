#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;


void solve(){
    int n,x; cin >> n >> x;
    vector <ll> coins(n); for(auto &x:coins){cin >> x;}
    vector <ll> dp(x + 1,-1);
    
    sort(coins.begin(),coins.end());
    for(int i = 0; i < n; i++){
        if(coins[i] <= x){
            dp[coins[i]] = 1;
        }
    }


    for(int i = 1; i <= x; i++){
        int j = 0;
        while(coins[j] && coins[j] < i){
            if(dp[i - coins[j]] != -1){
                dp[i] = (dp[i] == -1)? dp[i- coins[j]] + 1:min(dp[i-coins[j]] + 1,dp[i]);
            }
            j++;
        }
    }

    cout << dp[x] << "\n";

    
}

int main(){
    solve();
    return 0;
}