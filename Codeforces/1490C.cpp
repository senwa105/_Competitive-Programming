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

unordered_set<ll> cubes;

void precalc() {
  for (ll i = 1; i*i*i <= 1e12; i++)
    cubes.insert(i*i*i);
}

bool isCube(ll x) {
    ll l = 1, r = 1e5;
    while (l <= r) {
        ll m = (l + r) / 2;
        ll m3 = m*m*m;

        if (m3 == x) return true;
        else if (m3 > x) r = m - 1;
        else l = m + 1;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    precalc();

    G(t);
    F(tt, 0, t) {
        G(x);
        string ans = "NO\n";

        F(i, 1, 1e4 + 5)
            if (isCube(x - i*i*i)) {
                ans = "YES\n";
                break;
            }
        
        cout << ans;
    }
}