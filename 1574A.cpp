#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int n; cin >> n;
		string base = "";
		for(int i = 0; i < n-1; i++) base += "()";
		
		for(int i = 1; i < 2*(n-1); i+=2){
			cout << base.substr(0, i) + "()" + base.substr(i) << "\n";
		}
		
		base += "()";
		cout << base << "\n";
	}
}

