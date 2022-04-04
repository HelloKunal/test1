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
		n *= 2;
		vector<int> Arr(n);
		for(int i = 0; i < n; i++) {
			cin >> Arr[i];
		}
		
		sort(Arr.begin(), Arr.end());
		
		cout << Arr[0] << " ";
		for(int i = 1; i < n-1; i+=2) {
			cout << Arr[i+1] << " ";
			cout << Arr[i] << " ";
		}
		cout << Arr[n-1] << "\n";
	}
}


