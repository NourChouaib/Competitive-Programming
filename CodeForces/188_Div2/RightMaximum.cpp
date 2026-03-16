#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &x: a){
        cin >> x;
    }
    int op = 0;
    int mx = 0;
    for(int i = 0; i < n; i++){
        if (a[i] >= mx){
            mx = a[i];
            op++;
        }
    }

    cout << op << endl;
    return 0;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}