#pragma GCC target("avx2")
#pragma GCC optimize("03")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<ll, ll> pl;

// macros
#define G(x) ll x; cin >> x;                                    // read ll from cin and store its value
#define F(i, start, end) for (ll i = start; i < (end); i++)     // shortened for loop

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    G(n); G(k);

    ll a[n];
    F(i, 0, n) cin >> a[i];
    ll b[n];
    F(i, 0, n) cin >> b[i];

    
    ll l = -1, r = 1e10;
    while (r - l > 1) {
        ll m = (l + r) / 2;
        ll powderNeeded = 0;
        F(i, 0, n) {
            powderNeeded += max(a[i]*m - b[i], 0ll);
        }
        if (powderNeeded > k) r = m;
        else                  l = m;
    }

    cout << l << "\n";
}