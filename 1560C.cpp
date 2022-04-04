#include <bits/stdc++.h>
using namespace std;

void ans (int k, vector<int> &t)
{	
	for (int i = 0; i < 1002; i++)
	{
		int ti = pow (i, 2) + 1;
		for (int j = 0; j <= i; j++)
		{
			cout << (ti + j) << "\n";
			if ((ti + j) == k)
			{
				t.push_back(j);
				t.push_back(i);
				return;
			}
		}
	}
	
}

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int k;
		cin >> k;
		vector<int> t = {};
		ans (k, t);
		cout << t[0] + 1 << " " << t[1] + 1<< "\n";
	}
}

