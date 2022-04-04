#include <bits/stdc++.h>
using namespace std;

bool greater1than2 (int i1, int i2, int ranks[][5])
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < 5; i++)
	{
		if (ranks[i1][i] < ranks[i2][i])
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	if (count1 >= 3)
		return true;
	else
		return false;
}

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int n;
		cin >> n;
		int ranks[n][5];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cin >> ranks[i][j];
			}
		}
		
		int max = 0;
		for (int i = 1; i < n; i++)
		{
			if (greater1than2(max, i, ranks) == false)
			{
				max = i;				
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (i == max) continue;
			if (greater1than2(max, i, ranks) == false)
			{
				max = -2;				
			}
		}
		cout << max + 1 << "\n";
	}
}

