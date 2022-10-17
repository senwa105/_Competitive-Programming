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
    F(i, 0, t) {
        G(n);
        ll count = n;
        ll inc = 1;
        bool add = true;

        while (count--) {
            ll num;
            if (add) num = inc;
            else num = n - inc++;
            if (num == (n+1)/2) {
                cout << n << " ";
                cout << num;
                break;
            }
            else cout << num << " ";
            add = !add;
        }
        cout << "\n";
    }
}