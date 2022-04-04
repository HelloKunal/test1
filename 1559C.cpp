#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		int firstOne = int(find(a.begin(), a.end(), 1) - a.begin());
		vector<int> res(n);
		iota(res.begin(), res.end(), 1);
		res.insert(firstOne+res.begin(), n+1);
		for(int i : res) {
			cout << i << " ";
		}
		cout << "\n";
	}	
}

