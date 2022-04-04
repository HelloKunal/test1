#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int A[7];
	int sum = 0;
	for ( int i = 0; i < 7; i++ )
	{
		int temp;
		cin >> temp;
		A[i] = temp;	
		sum += temp;
	}
	
	int ans = 0;
	int temp = N % sum;
	ans = (temp == 0)? 1: 0;
	N = temp;
	for ( int i = 0; N > 0; i++ )
	{
		N -= A[i];
		ans++;
	}
	cout << ans;
}
