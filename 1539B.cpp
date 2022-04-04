#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		int sum = 0;
		for (int i = l; i <= r; i++)
		{
			char t = s[i - 1];
			int word = t - 97 + 1;
			sum += word;
		}
		
		cout << sum << "\n";		
	}	
}

