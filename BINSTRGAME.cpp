#include	<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string target1;//01
	    string target2;//10
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        target1+='0';
	        else
	        target1+='1';
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        target2+='1';
	        else
	        target2+='0';
	    }
	    if(s==target1 || s==target2)
	{
	    cout<<"Uttu\n";
	    continue;
	}
	    int ans1=0;
	    int ans2=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!=target1[i])
	        {
	            ans1++;
	            for(int j=i;j<n;j++)
	            {
	                if(s[j]==target1[j])
	                {
	                    i=j-1;
	                    break;
	                }
	            }
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!=target2[i])
	        {
	            ans2++;
	            for(int j=i;j<n;j++)
	            {
	                if(s[j]==target2[j])
	                {
	                    i=j-1;
	                    break;
	                }
	            }
	        }
	    }
	    //int x=min(ans1,ans2);
	    if(ans1%2==1 || ans2%2==1)
	    {
	        cout<<"JJ\n";
	    }
	    else
	    {
	        cout<<"Uttu\n";
	    }
	   
	}

}