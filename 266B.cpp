#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N, t;
	cin >> N >> t;
        string s, s1 = "";
        cin >> s;
        for ( int j = 0; j < t; j++ )
        {
                for ( int i = 0; i < N; i++ )
                {
                        if ( i == N )
                        {
                                s1 += s[ i ];
                        }
                        else if ( s[ i ] == 'B' && s[ i + 1 ] == 'G' )
                        {
                                s1 += "GB";
                                i++;
                        }
                        else
                                s1 += s[ i ];
                }
                s = s1;
                s1 = "";
        }
        cout << s;
}
