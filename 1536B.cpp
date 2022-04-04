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
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		string s; cin >> s;
		
		string res = "";
		for(int g = 0; g < n; g++) {
			vector<string> gapArr;
			for(int i = 0, j = g; j < n; i++, j++) {
				string temp = s.substr(i, j-i+1);
				gapArr.push_back(temp);
			}
			sort(gapArr.begin(), gapArr.end());
//			for(string str : gapArr) cout << str << "\n";
			
			string prev(g+1, 'a');
			string last(g+1, 'z');
			res = "";
			if(prev != gapArr[0]) res = prev;
			else {
				for(int k = 0; k <= gapArr.size(); k++) {
					string str;
					if(k == gapArr.size()) str = last;
					else str = gapArr[k];
					
					if(str == prev) continue;
					
					bool possible = true;				
					res = prev;
					int last = res.size()-1;
					res[last]++;
					while(res[last] == 'z'+1) {
						res[last] = 'z';
						last--;
						if(last == -1) {
							possible = false;
							break;
						}
						res[last]++;
					}
					
					if(possible && str != res) {
	//					cout << ++count << "\n";
	//					cout << prev << "\n";
	//					cout << str << "\n";
						break;
					} else {
						res = "";
					}
					prev = str;
				}
			
			}
			
			if(res != "") break;
		}
		
		if(res != "") cout << res << "\n";
		else cout << "-1\n";
	}
}


