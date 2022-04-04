#include <bits/stdc++.h>
using namespace std;

int brewAns (int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k == 100)
	{
		return 1;
	}
	else
	{
		int ans = 1;
		
		int cal;
		if (k >= 50)
		{
			cal = k / (100 - k);
		}
		else
		{
			cal = (100 - k) / k;
		}
		
		ans += cal;
		return ans;
	}
}

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int k;
		cin >> k;
		
		cout << brewAns(k) << "\n";
	}
}

