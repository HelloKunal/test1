#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	
	int x = 0;
	for ( int i = 0; i <= N; i++ )
	{
		for ( int j = N; j > i; j-- )
			cout << "  ";
			
		for ( int j = 0; j <= i; j++ )
			cout << j << " ";
			
		for ( int j = i - 1; j >= 0; j-- )
			cout << j << " ";
			
		cout << "\n";
	}
	
	for ( int i = N - 1; i >= 0; i-- )
	{
		for ( int j = N; j > i; j-- )
			cout << "  ";
			
		for ( int j = 0; j <= i; j++ )
			cout << j << " ";
			
		for ( int j = i - 1; j >= 0; j-- )
			cout << j << " ";
			
		cout << "\n";
	}
	
}


