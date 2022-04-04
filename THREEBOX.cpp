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
		int A, B, C, D; cin>>A>>B>>C>>D;
		
		int res;
		if(A+B+C <= D) res = 1;
		else if(A+B <= D || B+C <= D || C+A <= D) res = 2;
		else res = 3;
		
		cout << res << "\n";
	}
}


