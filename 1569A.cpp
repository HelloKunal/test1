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
		int preS[n];
		preS[0] = s[0] == 'a' ? 1 : -1;
		for(int i = 1; i < n; i++) preS[i] = ((s[i] == 'a') ? 1 : -1) + preS[i-1] ;
		
		int sum = 0;
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				if(i == 0) {
					sum = preS[j];
				} else {
					sum = preS[j] - preS[i-1];
				}
				
				if(sum == 0) {
					cout << i+1 << " " << j+1 << "\n";
					sum = INT_MAX;
					break;
				}
			}
			if(sum == INT_MAX) break;
		}
		if(sum != INT_MAX) cout << "-1 -1\n";
	}
}

