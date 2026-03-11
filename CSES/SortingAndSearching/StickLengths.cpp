#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<long long> a(n); for(auto &x: a) cin >> x;

    sort(a.begin(),a.end());
    long long median = a[n/2];
    long long totalCost = 0;
    for (int i = 0; i < n; i++){
        long long dif = abs(a[i] - median);
        totalCost += dif;
    }
    cout << totalCost << endl;
    return 0;
}

int main(){
    solve();
    return 0;
}