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
#define F(i, start, end) for (ll i = (start); i < (end); i++)   // shortened for loop

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    G(t);
    F(tt, 0, t) {
        G(n);
        string lids; cin >> lids;
        ll boxes[n]; F(i, 0, n) cin >> boxes[i];

        ll ans = 0, minimum = 0;
        F(i, 0, n) {
            if (lids[i] == '0') minimum = boxes[i];
            else {
                if (minimum > boxes[i]) {
                    ans += minimum;
                    minimum = boxes[i];
                }
                else ans += boxes[i];
            }
        }

        cout << ans << "\n";
    }
}