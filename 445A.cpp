#include <bits/stdc++.h>
using namespace std;

char checkAroundPoint ( char *arr, int i, int j, int n, int m)
{
	char ans='.';
	bool noOneX=false;
	if(i==0&& i==(n-1))
	{
		noOneX=true;
	}
	else if(i==0)
	{
		
		char t=*((arr+(i+1)*n) + j);
		if(t!='.'|| t!='-')
			ans=t;
	}
	else if(i==(n-1))
	{
		char t=*((arr+(i-1)*n) + j);
		if(t!='.'|| t!='-')
			ans=t;
	}
	else
	{
		char t=*((arr+(i+1)*n) + j);
		if(t!='.'|| t!='-')
			ans=t;
		t=*((arr+(i-1)*n) + j);
		if(t!='.'|| t!='-')
			ans=t;		
	}
	if(ans!='.')
	{
		if(ans=='W')
			return 'B';
		else
			return 'W';
	}
	
	
	if(j==0&& j==(n-1))
	{
		
	}
	else if(j==0)
	{
		char t=*((arr+(i)*n) + (j+1));
		if(t!='.'|| t!='-')
			ans=t;
	}
	else if(j==(n-1))
	{
		char t=*((arr+(i)*n) + (j-1));
		if(t!='.'|| t!='-')
			ans=t;
	}
	else
	{
		char t=*((arr+(i)*n) + (j+1));
		if(t!='.'|| t!='-')
			ans=t;
		t=*((arr+(i)*n) + (j-1));
		if(t!='.'|| t!='-')
			ans=t;		
	}
	if(ans!='.')
	{
		if(ans=='W')
			return 'B';
		else
			return 'W';
	}
	return 'W';
}

int main ( void )
{
	int n, m;
	cin>>n>>m;
	char arr[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(arr[i][j]!='-')
			{
				char color=checkAroundPoint(&arr[0][0], i, j, n, m);
				arr[i][j]=color;
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<arr[i][j];
		}
		cout<<"\n";
	}

}


