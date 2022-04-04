#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int n, m; cin >> n >> m;
	string s; cin >> s;
	int sLen = s.length();

	int res = 0;
	int rX = 1, rY = 1;

	int xLeft = 1, xRight = m;
	int yLeft = 1, yRight = n;
	while(xLeft <= xRight && yLeft <= yRight) {
		int xMid = (xLeft + xRight) / 2;
		int yMid = (yLeft + yRight) / 2;
		int xIter = xMid;
		int yIter = yMid;

		int distHere = 1;
		bool flag = false;
		for(int i = 0; i < sLen; i++) {
			switch(s[i]) {
				case 'D':
					yIter++;
					break;
				case 'U':
					yIter--;
					break;
				case 'L':
					xIter--;
					break;
				case 'R':
					xIter++;
					break;
			}
			if(xIter <= 0 || xIter > m || yIter <= 0 || yIter > n) {
				flag = true;
				break;
			}
			distHere++;
		}

		if(flag) {
			if(distHere >= res) {
				res = distHere;
				rX = xMid;
				rY = yMid;				
			}

			if(xIter <= 0) xLeft = xMid + 1;
			else if(xIter > m) xRight = xMid - 1;

			if(yIter <= 0) yLeft = yMid + 1;
			else if(yIter > n) yRight = yMid - 1;
		} else {
			if(distHere >= res) {
				res = distHere;
				rX = xMid;
				rY = yMid;		
				break;		
			}			
		}
	}

	cout << rY << " " << rX << "\n";
	// cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}