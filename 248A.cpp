#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
        int x1 = 0, x2 = 0;
	for ( int i = 0; i < N; i++ )
        {
                int temp;
                cin >> temp;
                if ( temp == 0 )
                        x1++;

                cin >> temp;
                if ( temp == 0 )
                        x2++;
        }
        int ans = 0;
        if ( x1 < ( N - x1 ) )
                ans += x1;
        else
                ans += ( N - x1 );

        if ( x2 < ( N - x2 ) )
                ans += x2;
        else
                ans += ( N - x2 );

        cout << ans;
}
