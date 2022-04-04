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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		long long int a, b; cin >> a >> b;
		if(a == b) cout << "0 0\n";
		else {
			long long int diff = abs(a-b);
			long long int maxGCD = diff;
			long long int minMoves = min(a % diff, diff-(a % diff));
			if(minMoves == 0) minMoves = a;
			if(min(a, b) < minMoves) {
				minMoves = min(a, b);
			}
			if(maxGCD == __gcd(a, b)) minMoves = 0;
			cout << maxGCD << " " << minMoves << "\n";			
		}
	}
}


