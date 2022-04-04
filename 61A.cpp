#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s1, s2;
        cin >> s1 >> s2;
        string ans = "";
        for ( int i = 0, y = s1.length(); i < y; i++ )
        {
                if ( s1[ i ] != s2[ i ] )
                {
                        ans += "1";
                }
                else
                {
                        ans += "0";
                }
        }
        cout << ans;
}
