#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string SA, SB;
	cin >> SA >> SB;
	int ans = 0;
	transform(SA.begin(), SA.end(), SA.begin(), ::toupper);
	transform(SB.begin(), SB.end(), SB.begin(), ::toupper);
	for ( int i = 0, j = SA.length(); i < j; i++ )
	{
		char A = SA[i];
		char B = SB[i];
		if ( A < B )
		{
			ans = -1;
			break;
		}	
		else if ( A > B )
		{
			ans = 1;
			break;
		}
	}
	
	cout << ans;
}
