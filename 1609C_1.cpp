#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

// linear sieve, also calculates divisors in 2:n
const int N = 1000000;
int lp[N+1];
vector<int> pr;
void func() {
	for(int i=2; i<=N; ++i) {
	    if (lp[i] == 0) {
	        lp[i] = i;
	        pr.push_back (i);
	    }
	    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
	        lp[i * pr[j]] = pr[j];
	}	
}

vi isOne;
vi isPrime;

void doubleSolve(int n, int e, vi& isOne, vi& isPrime) {
	vi ones;
	vector<bool> chained(n+1, false); // we calculate all possible in one iteration, now not needed if again

	int res = 0;
	for(int i = 1 ; i <= n; i++) if(!chained[i]) {
		ones.clear();
		int countOnes = 0;

		for(int j = i; j <= n; j+=e) {
			if((!isOne[j] && !isPrime[j]) || chained[j]) {
				break;
			}
			chained[j] = true;
			if(isOne[j]) {
				countOnes++;
			} else {
				ones.push_back(countOnes);
				countOnes = 0;
			}
		}


		if(ones.size() == 0) continue;
		// last countOnes is not included.
		ones.push_back(countOnes);
		for(int j = 0; j < ones.size(); j++) {
			res += ones[j];
			if(j > 0 && j < ones.size() -1) {
				res += ones[j];
			}

			if(j < ones.size() - 1) {
				res += ones[j] * ones[j+1];
			}
		}
	}

	cout << res;
}

void solve() {
	int n, e; cin>>n>>e;
	isOne.assign(n+1, 0);
	isPrime.assign(n+1, 0);

	for(int i = 1; i <= n; i++) {
		int a; cin>>a;
		if(a == 1) isOne[i] = 1;
		else if(binary_search(pr.begin(), pr.end(), a)) isPrime[i] = 1;
	}

	doubleSolve(n, e, isOne, isPrime);
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	func();
	for(int test = 0; test < tests; test++) {
		solve();
        cout << "\n";
	}
}