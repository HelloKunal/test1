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
		int h, p; cin >> h >> p;
		
		queue <int> q;
		int res = 0;
		q.push(1);
		while(q.size() != 0) {
			res++;
			int qsize = q.size();
			int arrsize = min(p, qsize);
			for(int i = 0; i < arrsize; i++) {
				int temp = q.front();
				q.pop();
//				perform
//				cout << temp << "\n";
				if(temp < h) {
					q.push(temp+1);
					q.push(temp+1);
				}				
			}
//			cout << "\n";
		}
		
		cout << res << "\n";
//		cout << "\n------------------------------------------\n";
	}
}


