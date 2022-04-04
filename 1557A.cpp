#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int n;
		cin >> n;
		int a[n];
		int maxInteger = 0;
		int sumOfIntegers = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sumOfIntegers += a[i];
			if (a[i] > maxInteger)
			{
				sumOfIntegers += maxInteger;
				maxInteger = a[i];
				sumOfIntegers -= maxInteger;
			}
		}
		
		double averageOfSecondSubSequence = (1.0) * sumOfIntegers / (n - 1);
		double res = averageOfSecondSubSequence + maxInteger;	
		cout << res << "\n";
	}
}

