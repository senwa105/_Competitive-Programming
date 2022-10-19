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
        bool a[10];
        F(j, 0, n) {
            G(num);
            a[num] = true;
        }

        ll combos = (10 - n) * (9 - n) * 3;         // 4 choose 3
        cout << combos << "\n";
    }
}