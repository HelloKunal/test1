#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string S;
	cin >> S;
	int A[93] = {0};
	for ( int i=0, j = S.length(); i<j; i++ )
	{
		A[S[i]-33]++;
	}
	
	if ( A[72-33] + A[81-33] + A[57-33] > 0 )
		cout << "YES";
	else
		cout << "NO";
}
