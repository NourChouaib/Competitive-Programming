#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n,x; cin >> n >> x;
    vector<int> p(n); for(int &x : p) cin >> x;
    int ans = 0;
    int i = 0;
    int j = n - 1;
    sort(p.begin(),p.end()); // O(n log n)
    while(j >= i){ // O(n)
        if (p[i] + p[j] > x){
            j--;
        }else{
            i++;
            j--;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
} // Total O(n log n)

int main(){
    solve();
    return 0;
}