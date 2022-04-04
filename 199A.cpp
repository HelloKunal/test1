#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	long long int N;
	cin >> N;
	long long int A = 0, B = 1;
	if ( N != 0 )
	{
		while ( A + B != N )
		{
			A += B;
			if ( A + B != N )
			{
				B += A;
			}
		}
		cout << 0 << " " << A << " " << B;
	}
	else
	{
		cout << "0 0 0";
	}
}

