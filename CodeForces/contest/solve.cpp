#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            count++;       
            if (i != n / i)
                count++;   
        }
    }
    return count;
}

int solve()
{
    int x, y;
    cin >> x >> y;

    ll f = 0;
    int s = x - y;
    int absS = abs(s);


    if (s == 0) {
        f = 1;
        cout << f << "\n";
        int ans[2] = {-1,1};
        for(int i = 0; i < x + y; i++){
            cout << ans[i % 2 == 0] << " ";
        }
        cout << "\n"; 
        return 0;
    } else {
        f = countDivisors(absS); 
    }

    cout << f % 676767677 << "\n";

    for (int i = 0; i < y; i++){
    cout << -1 << " ";
    }

    for (int i = 0; i < x; i++){
        cout << 1 << " ";
    }

    cout << "\n";

    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}