#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n,x; cin >> n >> x;
    vector<pair<int,int>> a(n); for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(),a.end());
    int left = 0;
    int right = n - 1;

    bool ans = false;
    while (left < right && !ans){
        if(a[right].first >= x){
            right--;
            continue;
        }
        int sum = a[left].first + a[right].first;
        if(sum == x){
            cout << a[left].second + 1 << " " << a[right].second + 1 << endl;
            ans = true;
        }else if(sum < x){
            left++;
        }else{
            right--;
        }
    }
    if(!ans){
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}

int main(){
    solve();
    return 0;
}