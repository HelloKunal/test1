/*int32_t factor= 0;
		for( int32_t i= 9; 1; i += (i*10)+9)
		{
			if( n/ i== 0){
				factor= i;
				break;
			}
		}

*/

#include <bits/stdc++.h>
#include <stdint.h>
#include <string>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int n;
		cin>> n;
		
		string s= to_string(n);
		//cout<< s<< "\n";
		int k= s.length();
		//cout<< k<< "\n";
		
		int ans=( k- 1)* 9;
		//cout<< ans<< "\n";
		
		string no="";
		for( int i= 0; i< k; i++){
			no+="1";
		}
		//cout<< no<< "\n";
		int32_t nu= atoi( no.c_str());
		//cout<< nu<< "\n";
		int counter= 2;
		for( int32_t i= nu; i<= n; i= nu* counter++){
			ans++;
		}
		
		cout<< ans<< "\n";
	}
}

