#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
    int n; cin >> n;
    if(n % 2 == 0) {
        int k = (n-2)/2;
        cout << k << " " << k+1 << " 1" << '\n';
    } else {
        int k = (n-1)/2;
        if(k % 2 == 0) {
            cout << k - 1 << " " << k+1 << " 1" << "\n";
        } else cout << k - 2 << " " << k+2 << " 1" << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // Remove in interactive problems
    int tests; cin >> tests;
    for(int test = 0; test < tests; test++) {
        solve();
    }
}