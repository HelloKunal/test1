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
		priority_queue<int> maxHeapOriginal;
		for(int i = 0; i < n; i++) {
			int t; cin >> t;
			maxHeapOriginal.push(t);
		}
		
		vector<int> res;
		for(int k = 1; k <= n; k++) {
			
			bool flag = false;
			priority_queue<int> maxHeap = maxHeapOriginal;
			while(1) {
				int kHere = k;
				stack<int> st;
				int andS = maxHeap.top();	st.push(maxHeap.top());	maxHeap.pop();	kHere--;
				if(andS == 0) {
					flag = true;
					break;
				}
				for(int i = 0; i < kHere; i++) {
					int t = maxHeap.top(); maxHeap.pop();
					st.push(t);
					andS &= t;
					if(andS == 0) break;
				}
				while(st.size() > 0) {
					maxHeap.push(st.top() - andS); st.pop();
				}
				
				if(andS == 0) {
					// check if entire array 0
					if(maxHeap.top() == 0) flag = true;
					else flag = false;
					break;
				}	
			}
			
			if(flag) res.push_back(k);
		}
		
		for(int i : res) cout << i << " ";
		cout << "\n";
	}
}
 