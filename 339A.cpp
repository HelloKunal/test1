#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	char* S;
	cin >> S;
	int A = 0, B = 0, C = 0;
	
    int token = atoi( strtok( S, "+" ) );
    while ( 1 )
    {
    	if ( token == 3 )
    		C++;
    	else if ( token == 2 )
    		B++;
    	else
    		A++;
    		
    	token = atoi( strtok( S, "+" ) );
    	cout << token << "\n";
	}
	
	string S1;
	for ( int i = 0; i < A; i++ )
	{
		S1 += "1+";
	}
	for ( int i = 0; i < B; i++ )
	{
		S1 += "2+";
	}
	for ( int i = 0; i < C; i++ )
	{
		S1 += "3+";
	}
	string st = S1.substr(0, S1.size()-1);
	cout << st;
}
