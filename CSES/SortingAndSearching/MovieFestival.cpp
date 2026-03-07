#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<pair<int,int>> intervals;

    for(int i = 0; i < n; i++){ 
        int a,b; cin >> a >> b;
        intervals.push_back({a,b});
    }
    
    sort(intervals.begin(),intervals.end(),[] (const pair<int,int> &a, const pair<int,int> &b) {
                                                return a.second < b.second;
    });

    int count = 1;
    int b = intervals[0].second;
    for(auto interval : intervals){ 
        if (interval.first >= b){
            count++;
            b = interval.second;
        }
    }
    cout << count << endl;
    return 0;
}

int main(){
    solve();
    return 0;
}