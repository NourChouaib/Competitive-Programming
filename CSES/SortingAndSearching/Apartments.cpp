#include <bits/stdc++.h>
using namespace std;

int solve(){
    int m,n,k; cin >> m >> n >> k;
    vector<int> a(m); for(int &x : a) cin >> x;
    vector<int> b(n); for(int &x : b) cin >> x;

    sort(a.begin(),a.end()); // O(m log m)
    sort(b.begin(), b.end()); // O(n log n)

    int ap = 0;
    int cs = 0;
    int ans = 0;

    while(cs < m && ap < n){ // O(m + n)
        if(a[cs] - k > b[ap]){
            ap++;
        }else if(a[cs] + k < b[ap]){
            cs++;
        }else{
            ap++;
            cs++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

int main(){
    solve();
    return 0;
}