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

int binarySearch(ll arr[], ll target, ll l, ll r) {
    while (r - l > 1) {
        ll m = (l + r) / 2;
        if (arr[m] <= target) l = m;
        else                  r = m;
    }
    
    return (l != -1) ? r : 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    G(n);
    ll arr[n];
    F(i, 0, n) cin >> arr[i];
    G(q);
    
    sort(arr, arr + n);
    for (ll i = 0; i < q; i++) {
        G(target);
        cout << binarySearch(arr, target, -1, n) << "\n";
    }
}