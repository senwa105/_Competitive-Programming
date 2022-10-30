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
    G(t);
    while (t--) {
        G(n);

        if (n % 2 == 0) {
            ll m = n / 2;
            F(i, 0, m) {
                cout << m-i << " ";
                cout << n-i << " ";
            }
        }
        else {
            ll m = n/2 + 1;
            F(i, 0, n/2) {
                cout << m-i << " ";
                cout << n-i << " ";
            }
            cout << 1 << " ";
        }

        cout << "\n";
    }
}