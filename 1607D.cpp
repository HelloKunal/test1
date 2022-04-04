#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int N; cin >> N;
		vector<int> Arr(N);
		vector<char> color(N);
		for(int i = 0; i < N; i++) cin >> Arr[i];
		for(int i = 0; i < N; i++) cin >> color[i];
		vector<pair<char, int>> SupArr(N);
		for(int i = 0; i < N; i++) {
			SupArr[i] = {color[i], Arr[i]};
		}

		sort(SupArr.begin(), SupArr.end());
		bool res = true;
		for(int i = 0; i < N && SupArr[i].first == 'B'; i++) {
			if(SupArr[i].second < i+1) {
				res = false;
				break;
			}
		}
		if(res) {
			for(int i = N-1; i >= 0 && SupArr[i].first == 'R'; i--) {
				if(SupArr[i].second > i+1) {
					res = false;
					break;
				}
			}
		}

		if(res) cout << "YES\n";
		else cout << "NO\n";
	}
}

