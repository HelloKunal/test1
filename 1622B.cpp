#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

bool compare1(vector<int>& a, vector<int>& b) {
	if(a[0] == b[0]) {
		return a[1] > b[1];
	}
	return a[0] > b[0];
}
bool compare2(vector<int>& a, vector<int>& b) {
	return a[2] < b[2];
}

void solve() {
	int n; cin>>n;
	vector<vector<int> > a(n, vector<int> (4));
	for(int i = 0; i < n; i++) {
		cin>>a[i][1];
		a[i][2] = i;
	}
	string s; cin>>s;
	for(int i = 0; i < n; i++) {
		a[i][0] = s[i] - '0';
	}
	sort(a.begin(), a.end(), compare1);
//	for(int i = 0; i < n; i++) cout<<a[i][0] << " ";
//	cout << "\n";
//	for(int i = 0; i < n; i++) cout<<a[i][1] << " ";
	int k= n;
	for(int i = 0; i < n; i++) 	a[i][3] = k--;
	sort(a.begin(), a.end(), compare2);
	for(int i = 0; i < n; i++) cout<<a[i][3] << " ";
	
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

