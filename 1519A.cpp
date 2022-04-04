#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int32_t r, r1, b, b1, d;
		cin>> r1>> b1>> d;
		
		r= max( r1, b1);
		b= min( r1, b1);
		
		bool ans= false;
		if( r>0&& b>0){
			if( r>( b +d)){
				
			}
			else if( r=( b+ d)){
				ans= true;
			}
			else
			{
				ans= true;
			}
		}
		else{
			ans= false;
		}
		
		if( ans== false){
			cout<< "NO\n";
		}
		else{
			cout<< "YES\n";	
		}
	}
}

