#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,m; cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(n);

    int last = 0;
    int lastPosition = 0;
    
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        if ((a[i] - last) % 2 == 0){
            if (b[i] != lastPosition){
                count += a[i] - last - 1;
            }else{
                count += a[i] - last;
            }
            
        }else{
            if (b[i] != lastPosition){
                count += a[i] - last ;
            }else{
                count += a[i] - last -1;
            }
        }
        last = a[i];
        lastPosition = b[i];
    }
    count += m - a[n-1];
    cout << count << endl;

    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}