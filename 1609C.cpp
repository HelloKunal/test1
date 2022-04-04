#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

// A optimized school method based C++ program to check
// if a number is prime
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


void solve() {
    int n, e; cin >> n >> e;
    vector<int> a(n+1);
    vector<int> preProd(n+1);
    int prod = 1;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        prod *= a[i];
        preProd[i] = prod;
    }

    for(int i = 1; i <= n; i++) cout << preProd[i] << " ";
    cout << "\n";

    int res = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << i << " " << j << "\n";
            if(i == j) continue;
            int k = i + e*j;
            if(k > n) continue;
            cout << "Pos " << k << "\n";

            int tempi = i;
            if(tempi > k) swap(tempi, k);

            int prodHere = 1;
            if(tempi == 1) {
                prodHere = preProd[k];
            } else {
                prodHere = preProd[k] / preProd[tempi - 1];
            }
            cout << "prod: " << prodHere << "\n";
            if(isPrime(prodHere)) res++;
        }
    }

    cout << res << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // Remove in interactive problems
    int tests; cin >> tests;
    for(int test = 0; test < tests; test++) {
        solve();
    }
}