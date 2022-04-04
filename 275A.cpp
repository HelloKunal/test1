#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
        int A[ 9 ] = { 0 };
	for ( int i = 0; i < 9; i++ )
        {
                int temp;
                cin >> temp;
                if ( temp % 2 != 0 )
                {
                        switch ( i )
                        {
                                case 0:
                                {
                                        A[ 0 ]++;
                                        A[ 1 ]++;
                                        A[ 3 ]++;
                                        break;
                                }
                                case 1:
                                {
                                        A[ 0 ]++;
                                        A[ 1 ]++;
                                        A[ 2 ]++;
                                        A[ 4 ]++;
                                        break;
                                }
                                case 2:
                                {
                                        A[ 1 ]++;
                                        A[ 2 ]++;
                                        A[ 5 ]++;
                                        break;
                                }
                                case 3:
                                {
                                        A[ 0 ]++;
                                        A[ 3 ]++;
                                        A[ 4 ]++;
                                        A[ 6 ]++;
                                        break;
                                }
                                case 4:
                                {
                                        A[ 1 ]++;
                                        A[ 3 ]++;
                                        A[ 4 ]++;
                                        A[ 5 ]++;
                                        A[ 7 ]++;
                                        break;
                                }
                                case 5:
                                {
                                        A[ 2 ]++;
                                        A[ 4 ]++;
                                        A[ 5 ]++;
                                        A[ 8 ]++;
                                        break;
                                }
                                case 6:
                                {
                                        A[ 3 ]++;
                                        A[ 6 ]++;
                                        A[ 7 ]++;
                                        break;
                                }
                                case 7:
                                {
                                        A[ 4 ]++;
                                        A[ 6 ]++;
                                        A[ 7 ]++;
                                        A[ 8 ]++;
                                        break;
                                }
                                case 8:
                                {
                                        A[ 5 ]++;
                                        A[ 7 ]++;
                                        A[ 8 ]++;
                                        break;
                                }
                        }
                }
        }
        for ( int i = 0; i < 9; i++ )
        {
                if ( A[ i ] % 2 == 0 )
                {
                        cout << 1;
                }
                else
                {
                        cout << 0;
                }

                if ( ( i + 1 ) % 3 == 0 )
                {
                        cout << "\n";
                }
        }
}
