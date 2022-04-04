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
		string dict, s; cin >> dict >> s;
		unordered_map<char, int> um;
		for (int i = 1; i <= dict.length(); i++) {
			um[dict[i]] = i;
		}
		int sum = 0;
		int prev = um[s[0]];
		for(int i = 1; i < s.length(); i++) {
			sum += abs(um[s[i]]-prev);
			prev = um[s[i]];
		}
		cout << sum << "\n";
	}
}


