#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define all(c) ((c).begin()), ((c).end())
#define sz(x) ((int)(x).size())

#ifdef LOCAL
#include <print.h>
#else
#define trace(...)
#define endl '\n'
#endif

long long int factorial(long long int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<int> a(n);
		
		long long int sum = 0;	
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		
		if((2*sum) % n != 0) {
			cout << "0\n";
			continue;
		}
		
		long long int req = 2.0*sum/n;
		
		long long int count = 0;
		sort(a.begin(), a.end());
		int start = 0, end = n-1;
		while(start < end) {
			long long int temp_sum = a[start] + 1ll*a[end];
			if(temp_sum == req) {
//				cout << a[start] << " " << a[end] << "\n";								
				int count1 = 1, count2 = 1;
				while(start+1 < end && a[start] == a[start+1]) {
					start++;
					count1++;
				}
				while(start+1 < end && a[end] == a[end-1]) {
					end--;
					count2++;
				}
				
//				cout << count1 << "\n" << count2 << "\n";
				if(start == end-1 && a[start] == a[end]) count += factorial(count1)*factorial(count2);
				else count += count1 * count2;
				start++;
				end--;
			} else if(temp_sum > req) {
				end--;
			} else {
				start++;
			}
		}
		
		cout << count << "\n";
	}
}


