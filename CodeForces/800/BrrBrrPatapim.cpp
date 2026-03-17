#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a(2*n - 1,0);
        vector <int> check(2*n + 1,0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int x; cin >> x;
                a[i + j] = x;
                check[a[i + j]] = 1;
            }
        }
        
        for(int i = 1; i < 2*n + 1; i++){
            if (check[i] == 0){
                cout << i << " ";
            }
        }
        for(int &k: a){
            cout << k << " ";
        }
        cout << endl;
        
    }

    return 0;
}