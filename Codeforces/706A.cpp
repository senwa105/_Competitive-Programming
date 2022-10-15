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
    G(a); G(b);
    G(n);

    ld best = LDBL_MAX;
    F(i, 0, n) {
        ld x, y , v;
        cin >> x >> y >> v;

        x -= a;
        y -= b;

        best = min(best, sqrt(x*x + y*y) / v);
    }

    cout << setprecision(20) << best << "\n";
}