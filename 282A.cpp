#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	int ans = 0;
	while ( testc-- )
	{
		string S;
		cin >> S;
		if ( S == "++X" || S == "X++" )
			ans++;
		else
			ans--;
	}
	cout << ans;
}
