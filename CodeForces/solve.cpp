#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> a(2*n); for(auto &x : a){cin >> x;}

    vector <int> l(n,-1);
    int l = 0;
    int r = 2*n -1;

    int mex = 0;
    while(l < r){
        if(a[l] < a[r]){
            l++;
        }else if(a[r] > a[l]){
            l--;
        }else{
            l++;
            r--;
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}