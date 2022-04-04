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
		vector<int> a(n);
		long long int sumA = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sumA += a[i];
		}
		
		sumA *= 2;
		if(sumA % n != 0) {
			cout << "0\n";
		} else {
			sumA /= n;
			long long int res = 0;
			
			int i = 0, j = n-1;
			sort(all(a));
			while(i < j) {
				if(a[i] + a[j] < sumA) i++;
				else if(a[i] + a[j] > sumA) j--;
				else {
					
					int x = a[i], xx = i;
					while(i < j and a[i] == x) i++;
					
					int y = a[j], yy = j;
					while(j >= i and a[j] == y) j--;
					
					if(x == y) {
						ll int temp = i - xx + (yy - j - 1);
						res += (temp * (temp+1))/2;
					} else {
						res += (i - xx) * 1LL * (yy - j);
					}
				}
			}
			
			cout << res << "\n";
		}
		
	}
}

