#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

/* Iterative Function to calculate (x^y)%p in O(log y) */
int powerUnderMod(int x, int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
    if (y == 0) return 1; // In case y is 0
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

// used for custom hashing in unordered_map , unordered_set to prevent hacking
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

bool chk(ll x, vector<int>& a, ll h)
{
  // greedy approach, put each cow in the first place you can
  // int cows_placed = 1, last_pos = A[0];
  ll damage = 0;
  for (ll i = 1, N = a.size(); i < N; i++)
  {
    // if ((A[i] - last_pos) >= x)
    // {
    //   if (++cows_placed == C)
    //     return true;
    //   last_pos = A[i];
    // }
    damage = damage + min((ll)a[i] - a[i-1], x);  
    if(damage >= h) return true;
  }

  damage += x; // for last poison
  if(damage >= h) return true;

  return false;
}

void solve() {
  ll int N, C; cin >> N >> C;
  vector<int> A(N);
  for (ll i = 0; i < N; i++) cin >> A[i];
  sort(A.begin(), A.end());

  // binary search 
  ll low = 1, high = C, mid, pos = 0;
  while (low <= high)
  {
    mid = (high + low) / 2;
    if (chk(mid, A, C))
    {
      high = mid - 1;
      pos = mid;
    }
    else
    {
      low = mid + 1;
    }
  }
  cout << pos << "\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); // Remove in interactive problems
  int tests; cin >> tests;
  for(int test = 0; test < tests; test++) {
    solve();
  }
}
