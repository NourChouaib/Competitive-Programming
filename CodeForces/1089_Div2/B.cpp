#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;

    vector <int> p(n); for(auto &x : p){cin >> x;}

    vector <int> chair (n,0);

    for (int i = 0; i < n; i++ ){
        if(chair[i] == 1){
            break;
        }
        if(p[i] -1 <= i){
            chair[p[i] - 1] = 1;
        }
    }
    
    int count = 0;
    for (int i = 0; i < n; i++ ){
        if(chair[i] == 1){
            count++;
        }
    }
    
    cout << count << "\n";
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}