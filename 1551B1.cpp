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
		string s; cin >> s;
		unordered_map<char, int> um;
		for(char c : s) {
			um[c]++;
		}
		
		int sum1 = 0, sum2 = 0;
		for(auto item : um) {
			if(item.second == 1) sum1++;
			else sum2++;
		}		
		
//		cout << sum1 << " " << sum2 << "\n";
		
		int k = 2*min(sum2, sum1/2);
		int res = k; sum1 -= k; sum2 -= k/2;
		res += sum1 / 2;
		res += sum2;
		
		cout << res << "\n";
	}
}


