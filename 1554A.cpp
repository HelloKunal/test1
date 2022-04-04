#include <bits/stdc++.h>
using namespace std;

int maxSumSubaary (int l, int r, int a[])
{
	int max_so_far = 0;
	for (int j = l; j < r; j++)
	{
		int min_here = INT_MAX, max_here = INT_MIN, maxo = 0;
		for (int i = j; i < r - 1; i++)
		{
			min_here = min (min_here, a[i]);
			max_here = max (max_here, a[i]);		
			maxo = min_here * max_here;
			
			if (maxo > max_so_far)
			{
				max_so_far = maxo;
				cout << i << ": " << min_here << "\n";
				cout << i << ": " << max_here << "\n";				
			}
		}
	}
	return max_so_far;
}

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		
		cout << maxSumSubaary (0, n, a) << "\n";
	}
}

