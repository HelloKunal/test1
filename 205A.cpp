#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int ans;
	cin >> ans;
	int index = 1;
	int count = 0;
	for ( int i = 2; i <= N; i++ )
	{
		int temp;
		cin >> temp;
		if ( temp < ans )
		{
			ans = temp;
			count = 0;
			index = i;
		}
		else if ( temp == ans )
		{
			count++;
		}
	}
	
	if ( count != 0 )
	{
		cout << "Still Rozdil";
	}
	else
	{
		cout << index;
	}
}

