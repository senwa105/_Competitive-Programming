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
    G(n);
    set<ll> squares; F(i, 0, 1005) squares.insert(i*i);

    ll ans = LLONG_MIN;
    F(nn, 0, n) {
        G(a);
        if (!squares.count(a)) 
            ans = max(ans, a);
    }

    cout << ans << "\n";
}