#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int A[N];
	for ( int i = 0; i < N; i++ )
		cin >> A[i];
		
	int M;
	int V = 0, P = 0;
	cin >> M;
	for ( int i = 0; i < M; i++ )
	{
		int B;
		cin >> B;
		for ( int i = 0; i < N; i++ )
		{
			if ( A[i] == B )
			{
				V += i+1;
				P += ( N - i );
				break;
			}
		}
	}
	
	cout << V << " " << P;
	
	
}
