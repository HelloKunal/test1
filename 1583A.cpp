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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<int> a(n);
		int sum = 0;
		int special = -1; bool spe = false;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(!spe && a[i] % 2 == 1) {
				spe = true;
				special = i;
			}
			sum += a[i];
		}
		if(!isPrime(sum)) {		
			cout << a.size() << "\n";
			for(int i = 1; i <= n; i++) cout << i << " ";
			cout << "\n";
		} else {		
			cout << a.size()-1 << "\n";
			for(int i = 0; i <  n; i++) {
				if(i == special) continue;
				cout << i+1 << " ";
			}
			cout << "\n";
		}
	}
}


