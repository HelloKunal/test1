#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int n, m;
        cin >> n >> m;
        string ans = "NO";
        for ( int x = n + 1; x <= m; x++ )
        {
                int temp = 1;
                for ( int j = 2; j < x; j++ )
                {
                        if ( x % j == 0 )
                        {
                                temp = 0;
                                break;
                        }
                }
                if ( temp == 1 )
                {
                        if ( x == m )
                        {
                                ans = "YES";
                                break;
                        }
                        else
                        {
                                ans = "NO";
                                break;
                        }
                }

        }
        cout << ans;
}
