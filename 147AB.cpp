#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int n;
		cin >> n;
		
		int k = 1, d = 1;
		for ( int j = 0; j < 2; j++ )
		{
			int y = k + n;
			if ( y % 2 == 0 && y != 2 )
			{
				y++;
			}
			for ( int i = y; 1; i+=2 )
			{
				if ( isPrime(i) )
				{
					d *= i;
					k = i;
					break;
				}
			}
		}
		cout << d << "\n";
	}
}

