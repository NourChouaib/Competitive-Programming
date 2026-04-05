#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<long long> seq;
    long long k = 2;
    
    seq.push_back(k); 
    while((int)seq.size() < n){
        long long L = lcm(k, k + 1);
        seq.push_back(L);         
        if((int)seq.size() < n){
            seq.push_back(k + 1);  
        }
        k += 2; 
    }
    
    for(int i = 0; i < n; i++)
        cout << seq[i] << " \n"[i==n-1];
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}