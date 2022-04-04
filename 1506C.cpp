/* Dynamic Programming solution to
find length of the
longest common substring */
#include <iostream>
#include <string.h>
using namespace std;

/* Returns length of longest
common substring of X[0..m-1]
and Y[0..n-1] */
int LCSubStr(string X, string Y, int m, int n)
{
	// Create a table to store
	// lengths of longest
	// common suffixes of substrings.
	// Note that LCSuff[i][j] contains
	// length of longest common suffix
	// of X[0..i-1] and Y[0..j-1].

	int LCSuff[m + 1][n + 1];
	int result = 0; // To store length of the
					// longest common substring

	/* Following steps build LCSuff[m+1][n+1] in
		bottom up fashion. */
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			// The first row and first column
			// entries have no logical meaning,
			// they are used only for simplicity
			// of program
			if (i == 0 || j == 0)
				LCSuff[i][j] = 0;

			else if (X[i - 1] == Y[j - 1]) {
				LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
				result = max(result, LCSuff[i][j]);
			}
			else
				LCSuff[i][j] = 0;
		}
	}
	return result;
}

// Driver code
int main()
{
	int testc;
	cin>>testc;
	while(testc--)
	{
		string x, y;
		cin>>x>>y;
		
		int n=x.length(), m=y.length();
		int z=LCSubStr(x, y, n, m);
		int i=n-z, j=m-z;
		
		cout<<(i+j)<<"\n";
	}
}

