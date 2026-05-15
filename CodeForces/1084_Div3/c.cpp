#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; 2*i < n; i++) {
        for (int j = 1; j < size(s); j++) {
            if (s[j] == s[j-1]) {
                s.erase(j-1, 2);
            }
        }
    }
    cout << (s.empty() ? "YES\n" : "NO\n");
}

signed main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}