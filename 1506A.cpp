#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int64_t n, m, x, i, j, y;
		cin>>n>>m>>x;
		
		i=x%n;
		if(i==0)
			i=n;
		j=(x-i+n)/n;
			
		y=(m*(i-1))+j;
		cout<<y<<"\n";		
	}
}

