#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int n;
		cin>> n;
		string s;
		cin>> s;
		
		char prev;
		int store[ 26]={ 0};
		bool ans= true;
		for( int i= 0; i< n; i++){
			
			if( i== 0){
				prev= s[ 0];
				store[s[0]- 'A']++;
			}
			else{
				if(s[i]==prev){
					store[s[i]- 'A']++;
				}
				else{
					if(store[s[i]- 'A']> 0){
						ans= false;
						break;
					}
					
					store[s[i]- 'A']++;
					prev= s[i];
				}
			}
			
		}
		
		if( ans== true){
			cout<< "YES"<< "\n";
		}
		else{
			cout<< "NO"<< "\n";
		}
	}
}

