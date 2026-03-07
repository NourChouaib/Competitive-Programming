#include <bits/stdc++.h>
using namespace std;


int solve(){
    int n,m; cin >> n >> m;
    multiset<int> h; 
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        h.insert(x);
    }

    
    for(int i = 0; i < m; i++){ 
        int t;
        cin >> t;
        auto ans = h.upper_bound(t);
        if ( ans == h.begin()){
            cout << -1 << endl;
        }else{
            ans--;
            cout << *ans << endl;
            h.erase(ans);
        }
    }
    return 0;
}

int main(){
    solve();
    return 0;
}
