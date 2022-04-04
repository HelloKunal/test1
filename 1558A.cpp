#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int a, b; cin >> a >> b;
		int d = floor(abs(a - b)*1.0 / 2);
		vector<int> res;
		int f = a + b - d;
		if((a + b) % 2 == 0) {
			for(int i = d; i <= f; i+= 2) res.push_back(i);
		} else {
			for(int i = d; i <= f; i++) res.push_back(i);
		}
		cout << res.size() << "\n";
		for(auto item : res) cout << item << " ";
		cout << "\n";
	}
}

