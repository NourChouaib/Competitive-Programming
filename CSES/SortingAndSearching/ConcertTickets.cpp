#include <bits/stdc++.h>
using namespace std;


int solve(){
    int n,m; cin >> n >> m; // n : nb of tickets
    multiset<int> h; // price of tickets
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        h.insert(x);
    }

    
    for(int i = 0; i < m; i++){ // O(m)
        int t;
        cin >> t;
        auto ans = h.upper_bound(t); // O(log(n))
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
