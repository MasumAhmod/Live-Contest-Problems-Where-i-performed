///Masum
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'

void solve()
{
    ll n;
    cin >> n;

    if (n < 15){
        if(n == 0){
            cout << 1 << endl;
        } else if(n == 1){
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
        return;
    }

    ll m = n / 15;

    m *= 3;

    if(n % 15 == 0){
        m += 1;
    } else if (n % 15 == 1){
        m += 2;
    } else {
        m += 3;
    }

    cout << m << endl;
}

int32_t main()
{
    ///cODE BY Masum
    optimize();

    // solve();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

 
