#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,m,l,r; cin >> n >> m >> l >> r;
    int lPrime=0;
    int rPrime=0;
    if(r-m >= 0){
        rPrime = m;
    }else{
        rPrime = r;
        lPrime = r - m;
    }
    cout << lPrime << " " << rPrime << endl;
    return 0;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}