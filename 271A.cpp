#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
        int found = 0;
        for ( int i = N + 1; found == 0; i++ )
        {
                int j = i;
                int A[ 10 ] = { 0 };
                while ( j > 0 )
                {
                        if ( ++A[ j % 10 ] == 2 )
                        {
                                found = 0;
                                break;
                        }
                        j /= 10;
                        found = 1;
                }
                if ( found == 1 )
                {
                        cout << i;
                }
        }
}
