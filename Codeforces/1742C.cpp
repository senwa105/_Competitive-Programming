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
        char ans = 'B';

        F(i, 0, 8) {
            string s; cin >> s;
            if (s == "RRRRRRRR") ans = 'R';
        }

        cout << ans << "\n";
    }
}

// Alternate solution
// char grid[8][8];
 
// int checkRow(ll row) {
//     int sum = 0;
//     F(i, 0, 8) sum += grid[row][i];
//     if (sum == 'R' * 8) return 'R';
//     else return 0;
// }
 
// int checkCol(ll col) {
//     int sum = 0;
//     F(i, 0, 8) sum += grid[i][col];
//     if (sum == 'B' * 8) return 'B';
//     else return 0;
// }
 
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
 
//     // SOLUTION HERE
//     G(t);
//     while (t--) {
//         F(i, 0, 8)
//             F(j, 0, 8)
//                 cin >> grid[i][j];
 
//         F(i, 0, 8) {
//             if (int c = checkRow(i)) {
//                 cout << 'R' << "\n";
//                 break;
//             }
//             if (int c = checkCol(i)) {
//                 cout << 'B' << "\n";
//                 break;
//             }
//         }                
//     }
// }