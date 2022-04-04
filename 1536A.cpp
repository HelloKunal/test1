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
		vector<int> arr;
		int maxArr = INT_MIN, minArr = INT_MAX;
		int zero = 0;
		bool negativecase = false;
		for(int i = 0; i < n; i++) {
			int t; cin >> t;
			if(t > 0) {
				arr.push_back(t);	
				maxArr = max(maxArr, t);
				minArr = min(minArr, t);
			} else if(t < 0) {
				negativecase = true;
			}
			else zero++;
		}
		
		if(negativecase) {
			cout << "NO\n";
			continue;
		}
		
		int dev_to = 1;
		for(int i = 0; i < arr.size(); i++) {
			if(arr[i] % minArr != 0) {
				dev_to = 0;
				break;
			}
		}
		
		int res = 0;
		if(zero) res++;
		if(dev_to == 0) {
			res += maxArr;
			if(res > 300 || res <= 0) {
				cout << "NO\n";
			} else {
				cout << "YES\n";
				cout << res << "\n";
				if(zero) cout << "0 ";
				for(int i = 1; i <= maxArr; i++) cout << i << ' ';
				cout << "\n";
			}
		} else {
			res += maxArr/minArr;
			if(res > 300 || res <= 0) {
				cout << "NO\n";
			} else {				
				cout << "YES\n";
				int i = 1;
				cout << res << "\n";
				if(zero) cout << "0 ";
				for(int i = maxArr % minArr == 0 ? minArr : maxArr % minArr; i <= maxArr; i+= minArr) cout << i << ' ';
				cout << "\n";
			}
		}
		
	}
}


