#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string S;
	cin >> S;
	int N[26] = {0};
	for ( int i = 0, y = S.length(); i < y; i++ )
	{
		char c = S[i];
		N[c - 97]++;
	}
	
	int ans = 0;
	for ( int i = 0; i < 26; i++ )
	{
		if ( N[i] != 0 )
			ans++;
	}
	
	if ( ans % 2 == 0 )
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	
}
