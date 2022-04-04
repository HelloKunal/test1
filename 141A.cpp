#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string S1, S2, S3;
	cin >> S1 >> S2 >> S3;
	int A[ 26 ] = {0};
	int B[26] = {0};
	int ans = 0;
	for ( int i = 0, j = S1.length(); i < j; i++ )
	{
		A[S1[i] - 65]++;
	}
	for ( int i = 0, j = S2.length(); i < j; i++ )
	{
		A[S2[i] - 65]++;
	}
	for ( int i = 0, j = S3.length(); i < j; i++ )
	{
		B[S3[i] - 65]++;
	}
	for ( int i = 0; i < 26; i++ )
	{
		if ( A[i] != B[i] )
		{
			ans = 1;
			cout << "NO";
			break;
		}
	}
	
	if ( ans == 0 )
	{
		cout << "YES";
	}
}
