#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;


/* Iterative Function to calculate (x^y)%p in O(log y) */
// int powerUnderMod(int x, int y, int p)
// {
//     int res = 1;     // Initialize result
 
//     x = x % p; // Update x if it is more than or
//                 // equal to p
  
//     if (x == 0) return 0; // In case x is divisible by p;
//     if (y == 0) return 1; // In case y is 0
 
//     while (y > 0)
//     {
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;
 
//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }

// used for custom hashing in unordered_map , unordered_set to prevent hacking
// struct custom_hash {
//     static uint64_t splitmix64(uint64_t x) {
//         x += 0x9e3779b97f4a7c15;
//         x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//         x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//         return x ^ (x >> 31);
//     }
//     size_t operator()(uint64_t x) const {
//         static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//         return splitmix64(x + FIXED_RANDOM);
//     }
// };

// function to count the divisors
// int countDivisors(int n)
// {
//     int cnt = 0;
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             // If divisors are equal,
//             // count only one
//             if (n / i == i)
//                 cnt++;
 
//             else // Otherwise count both
//                 cnt = cnt + 2;
//         }
//     }
//     return cnt;
// }

// linear sieve, also calculates divisors in 2:n
// const int N = 10000000;
// int lp[N+1];
// vector<int> pr;
 
// for (int i=2; i<=N; ++i) {
//     if (lp[i] == 0) {
//         lp[i] = i;
//         pr.push_back (i);
//     }
//     for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
//         lp[i * pr[j]] = pr[j];
// }


void solve() {
	string a, b1;
    cin >> a >> b1;
    int n = b1.size();
    int m = a.size();

    string res = "";
    int j = a.size() - 1;

    bool flag = true;
    int i = b1.size() - 1;
    for (; i >= 0; i--, j--) {
        int x, y;
        int xx;
        x = b1[i] - '0';
        if (j < 0) {
            res = b1[i] + res;
            continue;
        }

        y = a[j] - '0';
        if ((x - y) >= 0) {
            res = to_string(x - y) + res;
        }
        else {
            if (i > 0) {
                x = (b1[i - 1] - '0') * 10 + x;
                if ((x - y) >= 0 && (x - y) <= 9) {
                    res = to_string(x - y) + res;
                    i--;
                } else {
                    flag = false;
                    break;
                }
            } else {
                flag = false;
                break;
            }
        }
    }
    if (j >= 0 || i >= 0) {
        flag = false;
    }
    if (flag)
        cout << stoll(res) << "\n";
    else {
        cout << -1 << "\n";
    }
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}