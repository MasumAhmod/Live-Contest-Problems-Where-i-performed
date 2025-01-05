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

void solve() {
    ll n, k;
    cin >> n >> k;

    vii v(n);
    map<ll, ll> mp;

    for (auto &u : v) {
        cin >> u;
        mp[u]++;
    }

    vii a;
    for (auto &u : mp) {
        a.pb(u.second);
    }

    sort(a.begin(), a.end());

    ll ans = a.size();

    if(n == k){
        cout << 1 << endl;
        return;
    }

    for (ll i = 0; i < a.size(); i++) {

        if (k >= a[i]) {
            k -= a[i];
            ans--;
        } else {
            break;
        }
    }

    cout << ans << endl;
}

int32_t main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

