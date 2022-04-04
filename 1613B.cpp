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
		unordered_map<int, bool> um;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			um[a[i]] = true;
		}

		sort(a.begin(), a.end());
		int req = floor(n*0.5);
		for(int i = 0; i < n; i++) {
			for(int j = n; j >= 0; j--) {
				int x = a[j] % a[i];
				if(!binary_search(a.begin(), a.end(), x)) {
					cout << a[j] << " " << a[i] << "\n";
					req--;
					if(req <= 0) break;
				    vector<int> v;
				 
				    // Vector is used to store  the divisors
				    for (int i = a[i]+1, y = sqrt(a[j]); i <= y; i++) {
				        if (a[j] % i == 0) {
				            // If n is a square number, push
				            // only one occurrence
				            if (a[j] / i == i)
				                v.push_back(i);
				            else {
				                v.push_back(i);
				                v.push_back(a[j] / i);
				            }
				        }
				    }

				    for(int k = 0; k < v.size(); k++) {
				    	int y = v[k] % a[i];
				    	if(!binary_search(a.begin(), a.end(), x)) {
				    		cout << v[k] << " " << a[i] << "\n";
							if(req <= 0) break;
				    	}
				    }

				    break;
				}
			}
			if(req <= 0) break;
		}
		// cout << "\n";
	}
}

