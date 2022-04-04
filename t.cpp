#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
	cin >> s;
	string s1 = "";
	int n = s.length();
	int ans = 0;
	
	int x = 0, y = 0, z = 0;
	int A[99];
	int B[99];
	int C[99];
	for ( int i = 0; i < n; i++ )
	{
		if ( s[i] == 'a' )
			A[x++] = i;
		else if ( s[i] == 'b' )
			B[y++] = i;
		else
			C[z++] = i;
	}
	
	int x1 = 0, y1 = 0, z1 = 0;
	for ( int i = A[x1]; x1 <= x; x1++ )
	{
		cout << i << endl;
		for ( int j = B[y1]; y1 <= y; y1++ )
		{
		cout << j << endl;
			if ( j > i )
			{
				for ( int k = C[z1]; z1 <= z; z1++ )
				{
				cout << k << endl;
					if ( k > j )
					{
						for ( int i1 = 0; i1 <= x1; i1++ )
							cout << "a";
						for ( int j1 = 0; j1 <= y1; j1++ )
							cout << "b";
						for ( int k1 = 0; k1 <= z1; k1++ )
							cout << "c";
							
						cout << "\n";
					}
				}
			}	
		}
	}
}

