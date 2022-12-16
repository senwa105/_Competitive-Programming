#pragma GCC target("avx2")
#pragma GCC optimize("03")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<ll, ll> pl;

// macros
#define G(x) ll x; cin >> x                                     // read ll from cin and store its value
#define F(i, start, end) for (ll i = start; i < (end); i++)     // shortened for loop

ll countOps(ll i) {
    ll ops = 0;
    bool originallyEven = i % 2;
    
    while (i % 2 == originallyEven) {
        i /= 2;
        ops++;
    }

    return ops;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll a[n]; 

        ll oddsCount = 0;
        F(i, 0, n) {
            cin >> a[i];
            if (a[i] % 2) oddsCount++;
        }

        if (oddsCount % 2) {
            // unordered_map<ll, ll> map;
            ll minOps = LONG_LONG_MAX;
            for (auto i : a) {
                ll ops = countOps(i);
                minOps = min(minOps, ops);
                // map[i] = countOps(i);
            }

            cout << minOps << '\n';
        }
        else cout << 0 << '\n';  
    }
}