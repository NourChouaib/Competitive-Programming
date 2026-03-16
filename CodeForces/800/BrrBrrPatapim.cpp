#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    vector<pair<int,int>>a(2*n + 1);
    for(int i=1;i<2*n + 1;i++){
        a[i] = {i,0};
    }

    for(int i = 1;i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            int val = grid[i - 1][j - 1];
            a[val].second = i + j;
        }
    }

    sort(a.begin(),a.end(),[] (pair<int,int> a, pair<int, int> b){
    return a.second < b.second;});

    for(int i = 1; i < 2*n + 1; i++){
        cout << a[i].first << " ";
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