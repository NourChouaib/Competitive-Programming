#include <bits/stdc++.h>
using namespace std;


int solve(){
    string s; cin >> s;
    int l = s.size();
    s.erase(l - 2, 2);
    cout << s + 'i' << endl;
    return 0;
}


int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

