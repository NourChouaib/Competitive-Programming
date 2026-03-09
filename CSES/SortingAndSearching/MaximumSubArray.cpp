#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<long long> x(n); for(int i = 0; i < n; i++) cin >> x[i];

    long long total = 0;
    long long mxtotal = x[0];
    for(int i = 0; i < n; i++){
        total += x[i];
        if (mxtotal < total) mxtotal = total;
        if (total < 0) total = 0;
    }
    cout << mxtotal << endl;
    return 0;
}

int main(){
    solve();
    return 0;
}