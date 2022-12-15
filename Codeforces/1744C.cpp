#pragma GCC target("avx2")
#pragma GCC optimize("03")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<ll, ll> pl;

// macros
#define G(x) ll x; cin >> x                                     // read ll from cin and store its value
#define F(i, start, end) for (ll i = start; i < (end); i++)     // shortened for loop

ll solve(ll n, char c, string& s) {
    string lights = s + s;
    ll maxDist = 0;
    
    ll lastGreen = -1;
    for (int i = n*2; i >= 0; i--) {
        if (lights[i] == 'g')
            lastGreen = i;
        if (lastGreen != -1 && lights[i] == c)
            maxDist = max(maxDist, lastGreen - i);
    }

    return maxDist;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    G(t);
    while (t--) {
        G(n);
        char c; cin >> c;
        string s; cin >> s;

        ll ans = c == 'g' ? 0 : solve(n, c, s);
        cout << ans << '\n';
    }
}