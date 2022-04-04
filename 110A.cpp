#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
        cin >> s;
        int temp = 1, nom = 0;
        for ( int i = 0, y = s.length(); i < y; i++ )
        {
                if ( s[ i ] == '7' || s[ i ] == '4' )
                {
                        nom++;
                }

        }
        s = to_string ( nom );
        for ( int i = 0, y = s.length(); i < y; i++ )
        {
                if ( s[ i ] != '7' && s[ i ] != '4' )
                {
                        temp = -1;
                }

        }
        if ( temp == -1 )
        {
                cout << "NO";
        }
        else
        {
                cout << "YES";
        }
}
