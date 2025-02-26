///Masum
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
#define pb push_back
#define vi vector<int>
#define vii vector<long long>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define gcd __gcd
#define MOD 1000000007

void solve()
{
    long long n;
    cin >> n;

    string s;
    cin >> s;

    if(n < 3){
        cout << 0 << endl;
        return;
    }

    long long cnt_minus = 0 , cnt_und = 0;

    for(int i = 0; i < n; ++i){
        if(s[i] == '-') cnt_minus++;
        else if(s[i] == '_') cnt_und++;
    }

    if(cnt_und == 0 || cnt_minus < 2){
        cout << 0 << endl;
    } else {
        if(cnt_minus & 1){
            long long a = cnt_minus / 2;
            long long b = (cnt_minus / 2) + 1;

            long long res = a * b * cnt_und;
            cout << res << endl;
        } else {
            long long a = cnt_minus / 2;

            long long res = a * a * cnt_und;

            cout << res << endl;
        }
    }
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



