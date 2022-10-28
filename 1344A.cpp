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

bool check(ll a[], ll n) {
    map<ll, ll> rooms;

        F(i, 0, n) {
            ll index = ((i % n) + n) % n;
            ll assign = (((a[i] + i) % n) + n) % n;
            if (rooms[assign]) {
                return false;
            }
            else rooms[assign]++;
        }   
        return true; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // SOLUTION HERE
    G(t);
    F(tt, 0, t) {
        G(n);
        ll a[n]; F(i, 0, n) cin >> a[i]; 
        
        string ans = check(a, n) ? "YES\n" : "NO\n";
        cout << ans;
    } 
}