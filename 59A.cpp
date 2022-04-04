#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
        cin >> s;

        int uc = 0, lc = 0;
        for ( int i = 0, y = s.length(); i < y; i++ )
        {
                if ( isupper ( s[ i ] ) )
                        uc++;
                else
                        lc++;
        }
        if ( uc > lc )
        {
                transform ( s.begin(), s.end(), s.begin(), ::toupper );
                cout << s;
        }
        else
        {
                transform ( s.begin(), s.end(), s.begin(), ::tolower );
                cout << s;
        }
}
