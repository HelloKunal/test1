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
		int n; cin >> n;
		multiset<int> m;
		for(int i = 0; i < n; i++) {
			int t; cin >> t;
			m.insert(t);
		}
		
		int diff = INT_MAX;
		int val1, val2;
		auto iC = m.begin(), jC = m.begin();
		for(auto y = m.begin(), i = ++y; i != m.end(); i++) {
			auto j = i; j--;
			if(*i - *j < diff) {
				val1 = *i;
				iC = i;
				val2 = *j;
				jC = j;
				diff = val1 - val2;
				if(diff == 0) break;
			}
		}
		
//		m.erase(val1);
//		m.erase(val2);
		cout << val2 << " ";
		for(auto k = ++iC; k != m.end(); k++) {
//			cout << "YAY";
			cout << *k << " ";
		}
		for(auto k = m.begin(); k != jC; k++) {
//			cout << "YAY";
			cout << *k << " ";
		}
		cout << val1 << "\n";
	}
}


