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
		vector<int> Arr(n);
		for(int i = 0; i < n; i++) cin >> Arr[i];	
		
		int res = 0;
		for(int i = 1; i <= n; i++) {
			int j = -1 * (i % Arr[i-1]);
			while(j < 0) j+= Arr[i-1];
			for(; j < i; j += Arr[i-1]) {
				if(Arr[i-1]*Arr[j-1] == i+j) res++;
			}
		}
			
		cout << res << "\n";
	}
}


