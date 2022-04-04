#include <bits/stdc++.h>
using namespace std;

int n;
long long int l;

bool checker (long long int mid, long long int a [])
{
	long long int i = 0;
	long long int j = a [i++];
	if (! (j - mid > 0))
	{	
		for (j = a[i++]; j < l && i < n; j = a[i++])
		{
			if (! (j - a [i - 2] > mid))
				return false;
		}
		if (j >= l)
			return true;
	}
	return false;
}

long long int BS (long long int left, long long int right, long long int a [])
{
	long long int ans;
	while (right >= left)
	{
		int mid = (left + right) / 2;
		if (checker (mid, a))
		{
			ans = mid;
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}		
	}
	return ans;
}

int main ( void )
{
	cin >> n >> l;
	long long int a [n];
	
	for (int i = 0; i < n; i++)
		cin >> a [i];
	
	
	long long int ans = BS (0, l, a);	
	cout << ans << "\n";	
}


