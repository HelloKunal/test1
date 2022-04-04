#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
        double sum = 0;
        for ( int i = 0; i < N; i++ )
        {
                double temp;
                cin >> temp;
                sum += temp / 100;
        }
        sum /= N;
        cout << sum * 100;
}
