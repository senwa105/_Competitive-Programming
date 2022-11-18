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
        G(m);
        G(s);
        ll b[m]; F(i, 0, m) cin >> b[i];

        ll currentSum = accumulate(b, b+m, 0);
        ll max = *max_element(b, b+m);
        set<ll> nums; F(i, 1, max+1) nums.emplace(i);

        for (auto bb : b) nums.erase(bb);
        ll sumOfSet = 0;
        for (auto n : nums) sumOfSet += n;

        while (sumOfSet < s) {
            sumOfSet += ++max;
        }

        string ans = (sumOfSet == s) ? "YES" : "NO";
        cout << ans << '\n';
    }
}