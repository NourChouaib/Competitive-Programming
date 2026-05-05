#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;
 
 
void solve(){
    int numberOfBooks, maxPricce; cin >> numberOfBooks >> maxPricce;
    vector <int> prices(numberOfBooks);for(auto &x : prices){cin >> x;};

    
    vector <int> pages(numberOfBooks); for(auto &z : pages){cin >> z;};

    vector<int> dp(maxPricce + 1,0);

    for(int j = 0; j < numberOfBooks; j++){
        for(int i = maxPricce; i >= 0; i--){
            if(i - prices[j] >= 0){
                dp[i] = max(dp[i] , dp[i - prices[j]] + pages[j]) % MOD;
            }
        }
    }

    cout << dp[maxPricce] << "\n";
}
 
int main(){
    solve();
    return 0;
}