#include <bits/stdc++.h>
using namespace std;

int search(vector<int> arr, int n, int target){
    int left = 0;
    int right = n - 1;
    int result = -1;
    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            result = mid;
            left = mid + 1;
        }else{
            right = mid - 1; 
        }
    }
    return result;
}

int solve(){
    int n,m; cin >> n >> m; // n : nb of tickets
    vector<int> h(n); for(int &x : h) cin >> x; // price of tickets
    vector<int> t(m); for(int &x : t) cin >> x; 

    sort(h.begin(),h.end());

    for(int i = 0; i < m; i++){
        int ans = search(h,n - i,t[i]);
        if ( ans != -1){
            cout << h[ans] << endl;
            h.erase(h.begin() + ans);
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}

int main(){
    solve();
    return 0;
}
