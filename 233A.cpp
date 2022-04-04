#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
        cin >> N;
        if ( N % 2 == 0 )
        {
                for ( int i = 1; i < N; i+=2 )
                {
                        cout << i + 1 << " " << i << " ";
                }
        }
        else
        {
                cout << -1;
        }
}
