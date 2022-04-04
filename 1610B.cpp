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

bool doCal(int start, int end, vector<int>& a, int del) {
	while(start < end) {
		if(a[start] == a[end]) {	
			start++;
			end--;
		} else if(del != -1) {
			if(a[start] == del) {
				start++;
			} else if(a[end] == del) {
				end--;
			} else {
				return false;
			}
		} else {
			break;
		}
	}
	
	if(start >= end) {
		return true;
	}
	
	if(del == -1) {
		return doCal(start+1, end, a, a[start]) || doCal(start, end-1, a, a[end]);
	} else {
		return false;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		if(doCal(0, n-1, a, -1)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}


