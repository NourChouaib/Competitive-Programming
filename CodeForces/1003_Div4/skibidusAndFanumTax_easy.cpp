#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,m; cin >> n >> m;
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    
    if(x - a[0] < a[0]){
        a[0] = x - a[0];
    }

    for(int i = 1; i < n; i++){
        int org = a[i];
        int trans = x - a[i];

        if (org >= a[i-1] && trans >= a[i-1]){
            a[i] = min(org,trans);
        }else if(trans >= a[i-1]){
            a[i] = trans;
        }else if(org >= a[i - 1]){
            a[i] = org;
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}