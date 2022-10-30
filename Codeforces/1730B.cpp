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

bool check(ld time, ll n, ll x[], ll t[]) {
    ld leftBorders[n];
    ld rightBorders[n];
    F(i, 0, n) {
        if (time < t[i]) return false;
        leftBorders[i] = x[i] - (time - t[i]);
        rightBorders[i] = x[i] + (time - t[i]);
    }

    ld leftMax = *max_element(leftBorders, leftBorders+n);
    ld rightMin = *min_element(rightBorders, rightBorders+n);
    if (leftMax <= rightMin) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    G(t);
    while (t--) {
        G(n);
        ll x[n]; F(i, 0, n) cin >> x[i];
        ll t[n]; F(i, 0, n) cin >> t[i];

        ld l = -1, r = 10e8 + 5, m;
        while (r - l > 10e-8) {
            m = (l + r) / 2;
            if (check(m, n, x, t)) r = m;
            else l = m;
        }

        ld finalDest = -10e8;
        F(i, 0, n) {
            finalDest = max(finalDest, x[i] - (l - t[i]));
        }

        cout << setprecision(20) << finalDest << "\n";
    }
}