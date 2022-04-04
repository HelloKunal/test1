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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int n, q;	
	cin >> n >> q;
	string s;
	cin >> s;	
	int sLen = s.length();
	vector<int> sums(sLen);
	for (int i = 0; i < sLen; i++) sums[i] = s[i] - 97 + 1;
	vector<int> pSum(sLen);
	pSum[0] = sums[0];
	for (int i = 1; i < sLen; i++) pSum[i] = pSum[i-1] + sums[i];
	
	for (int qt = 0; qt < q; qt++)
	{
		int l, r;
		cin >> l >> r;
		int sum = 0;
		if(l == 1) sum = pSum[r-1];
		else {
			sum = pSum[r-1] - pSum[l-2];
		}
		cout << sum << "\n";		
	}	
}


