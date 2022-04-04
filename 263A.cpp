#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
        int temp;
        int sum = 0;
	for ( int i = -2; i < 3; i++ )
        {
                for ( int j = 2; j > -3; j-- )
                {
                        cin >> temp;
                        if ( temp == 1 )
                        {
                                sum += abs ( j );
                                break;
                        }
                }
                if ( temp == 1 )
                {
                        sum += abs ( i );
                        break;
                }
        }
        cout << sum;

}
