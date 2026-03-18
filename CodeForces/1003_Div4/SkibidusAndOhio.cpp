#include<bits/stdc++.h>
using namespace std;

int solve(){
    string s; cin >> s;
    int count = 0;
    for(int i = 0; i < s.size() -1; i++){
        if (s[i] == s[i+1]){
            cout << 1 << endl;
            return 0;
        }
    }

    cout << s.size()<< endl;
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}