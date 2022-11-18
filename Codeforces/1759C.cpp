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

ll solve(ll l, ll r, ll x, ll curr, ll target) {
    if (curr < target) {
        if (target - curr >= x) return 1;
        if (curr - l >= x && target - l >= x) return 2;
        if (r - target >= x) return 2;

        if (r - target < x && target - l < x) return -1;
        if (curr + x > r) return -1;
        
        return 3;
    }

    else if (curr > target) {
        if (curr - target >= x) return 1;
        if (r - curr >= x && r - target >= x) return 2;
        if (target - l >= x) return 2;

        if (r - target < x && target - l < x) return -1;
        if (curr - x < l) return -1;
        
        return 3;
    }

    else return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    G(t);
    F(i, 0, t) {
        G(l);
        G(r);
        G(x);
        G(a);
        G(b);

        ll ans = solve(l, r, x, a, b);
        cout << ans << '\n';
    }
}