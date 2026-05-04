#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;
 
 
 
void solve(){
    int n; cin >> n;
    vector <ll> dp(n + 1, 1e9);
    dp[0] = 0;
    for(int i = 0; i < n + 1; i++){
        ll temp = i;
        while(temp){
            ll d = temp % 10;
            dp[i] = min(dp[i] , dp[i-d] + 1);
            temp /= 10;
        }
        
    }
    cout << dp[n] << "\n";
}
 
int main(){
    solve();
    return 0;
}
