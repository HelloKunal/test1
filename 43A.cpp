#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int ans = 0;
	string S1, S2;
	cin >> S1;
	ans++;
	for ( int i = 1; i < N; i++ )
	{
		string S;
		cin >> S;
		
		if ( S == S1 )
		{
			ans++;
		}
		else
		{
			S2 = S;
			ans--;
		}	
	}
	if ( ans > 0 )
		cout << S1;
	else
		cout << S2;
}

