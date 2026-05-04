#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;
 
 
void solve(){
    int n; cin >> n;
    vector <vector <int>> dp(n,vector<int> (n,0));

    if(n == 1){
        char x; cin >> x;
        if(x == '*'){
            cout << 0 << "\n";
        }else{
            cout << 1 << "\n";
        }
        return;

    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - 1; j >= 0; j--){
            char x; cin >> x;
            if(x == '*'){
                dp[i][j] = -1;
            }
        }
    }


    dp[0][0] =(dp[0][0] == -1)? 0: 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int below = 0;
            int right = 0;

            if(dp[i][j] == -1){
                dp[i][j] = 0;
            }else{
                below = (i - 1 >= 0)? dp[i -1][j] : 0;
                right = (j - 1 >= 0)? dp[i][j-1] : 0;
                
                
                dp[i][j] += (below + right) % MOD; 

            }
            
        }
    }

    cout << dp[n-1][n-1] << "\n";


    
}
 
int main(){
    solve();
    return 0;
}