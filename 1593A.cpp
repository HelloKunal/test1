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
		long int a, b, c; cin >> a >> b >> c;
		
		cout << max(0*1l, max(b+1-a, c+1-a));
		cout << " ";
		cout << max(0*1l, max(a+1-b, c+1-b));
		cout << " ";
		cout << max(0*1l, max(b+1-c, a+1-c));
		cout << "\n";
	}
}


