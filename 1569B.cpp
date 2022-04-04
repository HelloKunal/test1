#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int n; cin >> n;
		string s; cin >> s;
		int arr[n][n] = {{0}};
		cout << n << s << "\n";
		for(int i = 0; i < n; i++) arr[i][i] = 1;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') {
				for(int j = 0; j < n; j++) {
					if(i == j) continue;
					arr[i][j] = 2;
					arr[j][i] = 2;
				}
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(arr[i][j] == 0) cout << "- ";
				else if(arr[i][j] == 1) cout << "X ";
				else if(arr[i][j] == 2) cout << "= ";
				else if(arr[i][j] == 3) cout << "+ ";
			}
			cout << "\n";
		}
//		bool checker[n] = {false};
//		bool gotit = true;
//		for(int i = 0; i < n; i++) {
//			if(s[i] == '2') {
//				gotit = false;
//				for(int j = n-1; j >= 0; j--) {
//					if(arr[i][j] == 0 && checker[j] == false) {
//						arr[i][j] = 3;
//						checker[j] = true;
//						gotit = true;
//						break;
//					}
//				}
//				if(gotit == false) break;
//			}			
//		}
//		if(gotit == false) cout << "NO\n";
//		else {
//			cout << "YES\n";
//			for(int i = 0; i < n; i++) {
//				for(int j = 0; j < n; j++) {
//					if(arr[i][j] == 0) cout << "- ";
//					else if(arr[i][j] == 1) cout << "X ";
//					else if(arr[i][j] == 2) cout << "= ";
//					else if(arr[i][j] == 3) cout << "+ ";
//				}
//				cout << "\n";
//			}
//		}
	}
}

