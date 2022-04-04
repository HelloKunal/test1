#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
        string s;
        cin >> s;
	char temp = s[ 0 ];
	int ans = 0;
	for ( int i = 1; i < N; i++ )
        {
		if ( s[ i ] == temp )
		{
			ans++;
		}
		else
		{
			temp = s[ i ];
		}
        }
	cout << ans;
}
