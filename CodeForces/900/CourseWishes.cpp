#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,k; cin >> n >> k; // number of courses  // number of priority levels

    vector <int> steps;
    vector <int> c(k + 2);
    c[0] = 0;
    vector <int> a(k + 2); 
    a[0] = 0;
    for(int i = 1; i <= k ; i++){
        cin >> a[i];
    }
    vector <int> b(n); 
    for(int i = 0; i < n; i++){
        cin >> b[i];
        c[b[i]]++; 
    }          

    int op = 0;
    a[k + 1] = 100;
    while(op < 1000){
        bool isEq = false;
        for(int i = 0; i < n; i++){
            if(b[i] < k + 1 && c[b[i] + 1] < a[b[i] + 1]){
                c[b[i] + 1]++;
                c[b[i]]--;
                b[i] += 1;
                isEq = true;
                steps.push_back(i + 1);
                break;
            }
        }
        if(!isEq){
            break;
        }
        op++;
    }

    cout << op << "\n"; 

    for(int i = 0; i < steps.size(); i++){
        cout << steps[i] << " ";
    }
    cout << "\n"; 


    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}