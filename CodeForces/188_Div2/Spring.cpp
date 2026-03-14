#include <bits/stdc++.h>
using namespace std;

int solve(){
    long long a,b,c,m; cin >> a >> b >> c >> m;
    
    long long aday = m/a;
    long long bday = m/b;
    long long cday = m/c;

    long long abdays = m / lcm(a,b);
    long long acdays = m / lcm(a,c);
    long long bcdays = m / lcm(b,c);

    long long abc = m / lcm(lcm(a,b),c);

    long long aday_only = aday - abdays - acdays + abc;
    long long bday_only = bday - abdays - bcdays + abc;
    long long cday_only = cday - bcdays - acdays + abc;

    long long acdays_only = acdays - abc;
    long long abdays_only = abdays - abc;
    long long bcdays_only = bcdays - abc;

    long long Alice = 6*aday_only + 3*abdays_only + 3*acdays_only + 2*abc;
    long long Bob   = 6*bday_only   + 3*abdays_only + 3*bcdays_only + 2*abc;
    long long Carol = 6*cday_only + 3*acdays_only + 3*bcdays_only + 2*abc;

    cout << Alice << " " << Bob << " "<< Carol << endl;


    return 0;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}