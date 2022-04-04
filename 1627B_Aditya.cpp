#include	<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
	   int n,m;
	   cin>>n>>m;
	   vector<int> ans;
	   if(n%2!=0 && m%2!=0)
	   {
	       int min=n/2 + m/2;
	       int ctr=4;
	       int x=1;
	       ans.push_back(min);
	       for(int i=1;i<n*m;i++)
	       {
	           int temp=ctr;
	           while(temp-- && i<=n*m)
	           {
	               ans.push_back(min+x);
	               //cout<<min+x<<" ";
	               i++;
	               
	           }
	           x++;
	           ctr+=4;
	       }
	   }
	   else if(n%2==0 && m%2!=0)
	   {
	       int min=n/2 + m/2;
	       int ctr=6;
	       int x=1;
	       ans.push_back(min);
	       ans.push_back(min);
	       //cout<<min<<" "<<min<<" ";
	       for(int i=2;i<n*m;i++)
	       {
	           int temp=ctr;
	           while(temp-- && i<=n*m)
	           {
	               ans.push_back(min+x);
	               //cout<<min+x<<" ";
	               i++;
	              
	           }
	           x++;
	           ctr+=4;
	       }
	   }
	   else if(m%2==0 && n%2!=0)
	   {
	       int min=n/2 + m/2;
	       int ctr=6;
	       int x=1;
	        ans.push_back(min);
	       ans.push_back(min);
	       //cout<<min<<" "<<min<<" ";
	       for(int i=2;i<n*m;i++)
	       {
	           int temp=ctr;
	           while(temp-- && i<=n*m)
	           {
	               ans.push_back(min+x);
	               //cout<<min+x<<" ";
	               i++;
	               
	           }
	           x++;
	           ctr+=4;
	       }
	   }
	   else
	   {
	       int min=n/2 + m/2;
	       int ctr=8;
	       int x=1;
	        ans.push_back(min);
	       ans.push_back(min);
	        ans.push_back(min);
	       ans.push_back(min);
	      // cout<<min<<" "<<min<<" "<<min<<" "<<min<<" ";
	       for(int i=4;i<n*m;i++)
	       {
	           int temp=ctr;
	           while(temp-- && i<=n*m)
	           {
	               ans.push_back(min+x);
	               //cout<<min+x<<" ";
	               i++;
	               
	           }
	           x++;
	           ctr+=4;
	       }
	   }
	   for(int i=0;i<n*m;i++)
	   cout<<ans[i]<<" ";
	   cout<<endl;
	    
	}

}