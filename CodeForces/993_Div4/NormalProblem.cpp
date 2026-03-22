#include<bits/stdc++.h>
using namespace std;

int solve(){
    string a; cin >> a;
    for(int i = a.size() - 1; i >= 0; i--){
        if (a[i] == 'q'){
            a[i] = 'p';
        }else if(a[i] == 'p'){
            a[i] = 'q';
        }
        cout << a[i];
    }
    cout << endl;
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}