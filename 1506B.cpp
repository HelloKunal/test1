#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		
		bool first=false;
		int lastposi=-1;
		int count=0;
		for(int i=0, j=0; i<n; i++, j++)
		{
			if(s[i]=='*')
			{
				if(!first)
				{
					s[i]='x';
					count++;
					j=0;
					first=true;
				}
				else
					lastposi=i;
			}			
			//cout<<i<<' '<<j<<'\n';
			if(j==(k)&& lastposi!=-1)
			{
				s[lastposi]='x';
				count++;
				j=i-lastposi;
			}
		}
		if(s[lastposi]=='*')
		{
			count++;
			s[lastposi]='x';
		}
		cout<<s<<'\n';
		cout<<count<<"\n";
		//.**.***..*..*.*.**.***..*..*.*.**.***..*..*.*.**.*
		//.**.***.**.***.**.***.**.***.**.***.**.***.**.***.
	}
}

