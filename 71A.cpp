#include <bits/stdc++.h>
#include <string>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		string S, S1;
		cin >> S;
		S1 = S;
		int n = S.length();
		if ( n > 10 )
		{
			S1 = S[ 0 ];
			S1 += to_string(n-2);
			S1 += S[ n-1 ];
		}
		cout << S1 << "\n";
	}
}

