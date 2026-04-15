#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;


void solve(){
    int n; cin >> n;
    vector <ll> dp(n + 1,0);

    dp[0] = 1;
    ll sum = 1;
    int last = (n < 6)? n: 6;
    for(int i = 1; i <= last; i++){
        dp[i] = sum % MOD;
        sum += dp[i];
    }

    for(int i=7; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4]+ dp[i-5]+ dp[i-6])%MOD;
    }

    cout << dp[n]%MOD << "\n";
}

int main(){
    solve();
    return 0;
}