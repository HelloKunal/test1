// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int NthRoot(int n, int m)
    {
        // Code here
        int start = 1, end = m;
        int res;
        while(start+1 < end) {
            int mid = (start + end) / 2;
            long long int x = pow(mid, n);
            cout<<mid<<"\n";
            cout<<x<<"\n";
            if(x == m) {
                return mid;
            } else if(x > m) {
                end = mid;
            } else {
                start = mid;
            }
        }
        
        return start;
    }  
};

// { Driver Code Starts.
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.NthRoot(n, m);
        cout << ans << "\n";
    }  
    return 0;
}  // } Driver Code Ends