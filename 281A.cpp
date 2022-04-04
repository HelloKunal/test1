#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
        cin >> s;
        string temp = "";
        temp += toupper ( s[ 0 ] );
        for ( int i = 1, y = s.length(); i < y; i++ )
                temp += s[ i ];

        cout << temp;
}
