#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int A[12];
	for ( int i = 0; i < 12; i++ )
	{
		cin >> A[i];
	}
	sort(A, A + 12, greater<int>());
	int count = 0;
	for ( int i = 0; i < 12; i++ )
	{
		if ( N <= 0 )
		{
			break;
		}
		N = N - A[i];
		count++;
	}
	
	if ( N > 0 )
		cout << -1;
	else
		cout << count;
}

