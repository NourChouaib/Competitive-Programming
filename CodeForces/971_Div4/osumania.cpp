#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = 0; j < 4; j++){
            char x; cin >> x;
            if(x == '#'){
                a[i] = count;
            }else{
                count++;
            } 
        }
    }

    for(int i = n-1; i >= 0; i--){
        cout << a[i] << " ";
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