#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	vector<vector<double>> fourSize;
	int omax = 0;
	double diffmax = 0;
	int start = 0;
	int jump = 1;
	for(int g = 1; g < n; g++) {
		for(int index = 0; index+g < n; index++) {
			int diff = a[index + g] - a[index];
			int prev = a[index];
			int pos = 1;
			for(int i = index+g; i < n; i += g) {
				if(a[i] - prev != diff) {
					break;
				}
				prev = a[i];
				pos++;
			}

			if(pos > omax) {
			    omax  = pos;
			    diffmax = diff;
			    start = index;
			    jump = g;
			    fourSize.clear();
			} else if(pos == omax) {
				fourSize.push_back({diffmax, start, jump}); 
			}
		}
	}
    
    int ores = 0;
    for(int i = 0; i < fourSize.size(); i++) {   
    	
		diffmax = fourSize[i][0];
		start = fourSize[i][1];
		jump = fourSize[i][2]; 	

	    diffmax = diffmax / jump;
	    int res = 0;
	    for(int i = start; i < n; i++) {
	        double x = (a[start] + (i - start)*diffmax);
	        // cout << x << " ";
	        if(a[i] != x) res++;
	    }
	    // cout << "\n";
	    // cout << res << "\n";
	    // for(int i : a) cout << i << " ";
	    // cout << "\n";
	    for(int i = start; i >= 0; i--) {
	        if(a[i] != (a[start] - (start - i)*diffmax)) res++;
	    }

	    ores = max(ores, res);
    }

    cout << ores;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
        cout << "\n";
	}
}