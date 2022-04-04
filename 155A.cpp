#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
        int min, max;
        int ans = 0;

        cin >> min;
        max = min;
	for ( int i = 1; i < N; i++ )
        {
                int temp;
                cin >> temp;
                if ( temp > max )
                {
                        max = temp;
                        ans++;
                }
                if ( temp < min )
                {
                        min = temp;
                        ans++;
                }
        }

        cout << ans;
}
