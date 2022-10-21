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
    G(q);
    map<string, string> currToOrig;

    F(qq, 0, q) {
        string old; cin >> old;
        string curr; cin >> curr;

        if (currToOrig.count(old)) {
            string orig = currToOrig[old];
            currToOrig.erase(old);
            currToOrig[curr] = orig;
        }
        else {
            currToOrig[curr] = old;
        }
    }

    cout << currToOrig.size() << "\n";
    for (auto p : currToOrig)
        cout << p.second << " " << p.first << "\n";
}