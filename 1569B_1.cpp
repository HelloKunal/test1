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
		int n;
		string s;
		cin >> n >> s;
		
		int twos = 0;
		for(char c : s) if(c == '2') twos++;
		if(twos == 1) cout << "NO\n";
		else {
			vector<vector<char>> matrix(n, vector<char>(n, 'O'));
			
			for(int i = 0; i < n; i++) {
				matrix[i][i] = 'X';
			}
			
			for(int i = 0; i < n; i++) {
				if(s[i] == '1') {
					for(int j = 0; j < n; j++) {
						if(i == j) continue;
						matrix[i][j] = '=';
						matrix[j][i] = '=';
					}
				}
			}
			
			bool flag = false;
			for(int i = 0; i < n; i++) {
				if(s[i] == '2') {
					int j = 0;
					bool flag2 = true;
					for(j = 0; j < n; j++) {
						if(matrix[i][j] == '+') {
							flag2 = false;
							if(matrix[j][i] == '+')
							break;
						}
						else if(matrix[i][j] == 'O') {
							flag2 = false;
							matrix[i][j] = '+';
							if(matrix[j][i] == '+') {
								flag = true;
								break;
							}
							matrix[j][i] = '-';
							break;
						}
					}
					if(flag2) flag = true;
					if(flag) break;
					
					for(; j < n; j++) {
						if(matrix[i][j] == 'O') {
							matrix[i][j] = '-';
							if(matrix[j][i] == '-') {
								flag = true;
								break;
							}
							matrix[j][i] = '+';
						}
					}
					
					if(flag) break;
				}
			}
			
			if(flag) cout << "NO\n";
			else {
				cout << "YES\n";
				for(int i = 0; i < n; i++) {
					for(int j = 0; j < n; j++) {
						cout << matrix[i][j];
					}
					cout << "\n";
				}
			}			
		}
		
	}
}


