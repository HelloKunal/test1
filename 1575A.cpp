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

bool compare(pair<string, int> i1, pair<string, int> i2)
{
    int n = i1.first.length();
    for(int i = 1; i <= n; i++) {
    	if(i1.first[i-1] == i2.first[i-1]) continue;
    	return (i % 2 == 0) ? i1.first[i-1] > i2.first[i-1] : i1.first[i-1] < i2.first[i-1];
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int n, m; cin >> n >> m;
	vector<pair<string, int>> Arr;
	for(int i = 1; i <= n; i++) {
		string t; cin >> t;
		Arr.push_back({t, i});
	}
	sort(Arr.begin(), Arr.end(), compare);
	
	for(pair<string, int> &s : Arr) cout << s.second << " ";
	cout << "\n";
	
}


