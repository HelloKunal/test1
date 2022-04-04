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
//	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n, m; cin >> n >> m;
		vector<string> stringArr(n);
		vector<string> pairArr(n-1);		
		for(int i = 0; i < n; i++) cin >> stringArr[i];
		for(int i = 0; i < n-1; i++) cin >> pairArr[i];
		
		string res = "";
		for(int i = 0; i < m; i++) {
			char xorsum = 0;
			for(int j = 0; j < n; j++) {
				xorsum = xorsum^stringArr[j][i];
			}
			for(int j = 0; j < n-1; j++) {
				xorsum = xorsum^pairArr[j][i];
			}
			res += xorsum;
		}
		
		cout << res << "\n";
	}
}


