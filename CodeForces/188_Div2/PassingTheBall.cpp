#include <bits/stdc++.h>
using namespace std;
 
int solve(){
    int n; cin >> n;
    vector <char> a(n);
    for(char &x: a){
        cin >> x;
    }
    int index = 1;
    for(int i = 0; i < n; i++){
        if (a[i] == 'R'){
            index++;
        }else{
            cout << index << endl;
            return 0;
        }
    }
    return 0;
}
 
int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}