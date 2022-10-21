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
    map<ll, ll> sameX;
    map<ll, ll> sameY;
    map<pair<ll, ll>, ll> duplicates;
    ll ans = 0;

    F(nn, 0, n) {
        pair<ll, ll> point;
        cin >> point.first;
        cin >> point.second;

        ans += sameX[point.first];
        sameX[point.first]++;
        ans += sameY[point.second];
        sameY[point.second]++;

        if (duplicates[point]) ans -= duplicates[point];
        duplicates[point]++;
    }

    cout << ans << "\n";
}