#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<pair<int,int>> events;
    vector<pair<int,int>> intervals;

    for(int i = 0; i < n; i++){ 
        int a,b; cin >> a >> b;
        intervals.push_back({a,b});
    }

    for(auto interval:intervals){
        events.push_back({interval.first,1});
        events.push_back({interval.second,-1});
    }

    sort(events.begin(), events.end()); 

    int mx = 1;
    int count = 0;

    for(auto event:events){
        count += event.second;
        if (count > mx) mx = count;
    }

    cout << mx << endl;

    return 0;
}

int main(){
    solve();
    return 0;
}
