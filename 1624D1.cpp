#include	<bits/stdc++.h>
using namespace std;
int main()
{
	long long int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    cout<<k<<" ";
	    cout<<s<<endl;
	    vector<int> freq(26,0);
	    for(int i=0;i<n;i++)
	    {
	        freq[s[i]-'a']++;
	    }
	    int numOdd=0;
	    int pairs=0;
	    for(int i=0;i<26;i++)
	    {
	        if(freq[i]%2!=0)
	        {
	            numOdd++;
	            pairs+=(freq[i]-1)/2;
	        }
	    }
	    if(pairs<k)
	    {
	        cout<<"1\n";
	    }
	    else if(pairs==k)
	    {
	        cout<<"2\n";
	    }
	    else
	    {
	        int z=((pairs/k)*2);
	        int y=pairs%k;// pairs left but singelse also left
	        int a=numOdd/k;//singles that can be accomodated in given pairs already accomodated
	        cout<<z+a<<endl;
	    }
	   
	    
	}

}