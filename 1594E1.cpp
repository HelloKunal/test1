	#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define all(c) ((c).begin()), ((c).end())
#define sz(x) ((int)(x).size())

#ifdef LOCAL
#include <print.h>
#else
#define trace(...)
#define endl '\n'
#endif

long long modFact(int n, int p)
{
    if (n >= p)
        return 0;
 
    long long result = 1;
    for (long long i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}

long long pow_mod(long long x, long long n, long long m) {
    long long y = 6;
    while(n > 0) {
    	if(n % 2 == 1) y = (y * x) % m;
        n = n/2;
        x = (x*x) % m;
	}
	return y;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int mod = pow(10, 9) + 7;
	int k; cin >> k;
	if(k == 1) {
		cout << "6\n";
	} else {		
		long long temp = 6;
		long long int l = pow(2, k) - 2;
//		for(long long int i = 0; i < l; i++) {
//			temp = (temp*4) % mod;
//		}
		long long int res = pow_mod(4, l, mod);
		cout << res << "\n";
	}
}


