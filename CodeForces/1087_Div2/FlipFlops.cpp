#include<bits/stdc++.h>
using namespace std;

int solve(){
    long long n,c,k; cin >> n >> c >> k;
    vector <long long> a(n);
    for (auto &x:a){
        cin >> x;
    } 

    
    sort(a.begin(),a.end());

    long long power = c;
    int i = 0;
    while(i < n && a[i] <= power){
        long long monsterPower = a[i];
        long long dif = power - monsterPower;
        if (k > 0){
            if (dif - k >= 0){
                power += a[i] + k;
                k = 0;
            }else{
                power += power;
                k -= dif;
            }
        }else{
            power += monsterPower;
        }
        i++;
    }

    cout << power << "\n";

    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}