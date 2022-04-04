#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
const int MOD = 1e9 + 7;
 
int n, m, k;
 
void solve() {
    cin >> n >> m >> k;
    if (m < n - 1 || m > (ll)n * (n - 1) / 2) {
        cout << "NO\n";
        return;
    }
    if (k == 0 || k == 1) {
        cout << "NO\n";
    }
    else if (k == 2) {
        if (n == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else if (k == 3) {
        if (n <= 2) {
            cout << "YES\n";
        } else {
            if (m == (ll)n * (n - 1) / 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    } else {
        cout << "YES\n";
    }
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen(".inp", "r")) {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }
    int ntest = 1;
    cin >> ntest;
    for (int i = 1; i <= ntest; ++ i) solve();
    return 0;
}
