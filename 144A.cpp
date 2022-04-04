#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
        int max = 0, m = 0;
        int min = 101, n = 0;
        for ( int i = 0; i < N; i++ )
        {
                int temp;
                cin >> temp;
                if ( temp > max )
                {
                        max = temp;
                        m = i;
                }
                if ( temp <= min )
                {
                        min = temp;
                        n = i;
                }
        }
        if ( m > n )
                m--;
        cout << ( m + ( N - 1 - n ) );
}
