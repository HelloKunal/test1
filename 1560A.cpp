#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int k;
		cin >> k;
		int j = 0;
		for (int i = 0; i < k; i++)
		{
			j++;
			if ((j % 3 == 0 || j % 10 == 3))
			{
				i--;
			}
		}
		
		cout << j << "\n";
	}
}

