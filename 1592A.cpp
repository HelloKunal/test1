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
		int n, H; cin >> n >> H;
		
		int max1 = 0, max2 = 0;
		for(int i = 0; i < n; i++) {
			int t; cin >> t;
			if(t > max1) {
				max2 = max(max2, max1);
				max1 = t;				
			}
			else if(t > max2) max2 = t;
		}
//		cout << max1 << " " << max2 << "\n";
		
		int k = H / (max1 + max2);
		H = H % (max1 + max2);
		int i = k*2;
		if(H > 0) i++, H-= max1;
		if(H > 0) i++;		
		
		cout << i << "\n";
	}
}


