#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin >> n;
    vector<int> a(n); for (int &x:a) cin >> x;
    sort(a.begin(),a.end()); // uses O(n log n)
    int ans = 1;
    for(int i = 1; i < n; i++){ // O(n)
        if (a[i] != a[i - 1]) ans++;
    }
    cout << ans << endl;
    return 0;
}
int main(){

    solve();
    return 0;
}
// total O(n log n)