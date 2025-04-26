///Masum
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
    long long n, x;
    cin >> n >> x;

    vector <long long> a(n), b(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    long long cnt = 0;

    for(int i = 0; i < n; ++i)
    {
        cin >> b[i];

        if(b[i] == -1)
        {
            cnt++;
        }
    }

    if(cnt == n)
    {
        long long mx = *max_element(a.begin(), a.end());
        long long mn = *min_element(a.begin(), a.end());

        long long tmp = mx - mn;

        if (x >= tmp) cout << (x - tmp) + 1 << endl;
        else cout << 0 << endl;

        return;
    }

    if(cnt == 0)
    {
        for(int i = 0; i < n - 1; ++i)
        {
            if(a[i] + b[i] != a[i + 1] + b[i + 1])
            {
                cout << 0 << endl;
                return;
            }
        }
        cout << 1 << endl;
        return;
    }

    long long k;

    for(int i = 0; i < n; ++i)
    {
        if(b[i] != -1)
        {
            k = a[i] + b[i];

            break;
        }
    }

    for(int i = 0; i < n; ++i)
    {
        if(b[i] != -1)
        {
            long long z = a[i] + b[i];

            if(z != k)
            {
                cout << 0 << endl;
                return;
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        if(a[i] > k)
        {
            cout << 0 << endl;
            return;
        }
    }

    for(int i = 0; i < n; ++i)
    {
        if(b[i] == -1)
        {
            if(x + a[i] < k)
            {
                cout << 0 << endl;
                return;
            }
        }
    }
    cout << 1 << endl;
}

int32_t main()
{
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
