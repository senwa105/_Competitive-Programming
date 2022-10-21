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
    multiset<ll> s1, s2, s3;

    F(i, 0, n) {
        G(x);
        s1.insert(x);
    }
    F(i, 0, n-1) {
        G(x);
        s2.insert(x);
    }
    F(i, 0, n-2) {
        G(x);
        s3.insert(x);
    }

    for (ll s : s2) {
        s1.erase(s1.find(s));
    }
    cout << *s1.begin() << "\n";

    for (ll s : s3) {
        s2.erase(s2.find(s));
    }
    cout << *s2.begin() << "\n";
}