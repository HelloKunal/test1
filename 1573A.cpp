#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int N; cin >> N;
		string S; cin >> S;
		int res = 0;
		for(int i = 0; i < N-1; i++) {
			if(S[i] != '0') {
				res += 1;
				res += S[i] - '0';			
			}
		}
		
		if(S[N-1] != '0') res += S[N-1] - '0';
		cout << res << "\n";
	}
}

