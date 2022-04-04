#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int ans = 999;
	int index1 = 0, index2 = 0;
	int t1, t1b;
	cin >> t1;
	t1b = t1;
	for ( int i = 2; i <= N; i++ )
	{
		int t2;
		cin >> t2;
		
		int temp = abs ( t2 - t1 );
		if ( temp < ans )
		{
			ans = temp;
			index1 = i-1;
			index2 = i;
		}
		
		t1 = t2;
	}
	int temp = abs ( t1b - t1 );
	if ( temp < ans )
	{
		ans = temp;
		index1 = 1;
		index2 = N;
	}
	
	cout << index1 << " " << index2;
	
}

