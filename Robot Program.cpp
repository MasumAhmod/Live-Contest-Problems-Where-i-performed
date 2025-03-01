///Masum
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'

void solve()
{
    long long n , x , k;
    cin >> n >> x >> k;

    string s;
    cin >> s;

    long long cnt = 0;
    bool chk = false;
    for(int i = 0; i < n; ++i){
        if(s[i] == 'L') x--;
        else x++;
        cnt++;

        if(x == 0){
            chk = true;
            break;
        }
    }

    // cout << x << endl;

    bool chk2 = false;
    long long cnt2 = 0;

    if(chk){
        for(int i = 0; i < n; ++i){
            if(s[i] == 'L') x--;
            else x++;

            cnt2++;

            if(x == 0){
                chk2 = true;
                break;
            }
        }
    } else {
        cout << 0 << endl;
        return;
    }
    // cout << cnt2 << endl;

    if(chk2){
        k -= cnt;
        long long ans = 0;

        ans = k / cnt2;
        ans += 1;

        cout << ans << endl;
    } else {
        cout << 1 << endl;
        return;
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

 
