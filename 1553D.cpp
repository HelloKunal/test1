#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

bool solve() {
	string primary, second; cin >> primary >> second;
	int sizePrimary = primary.length();
	int sizeSecond = second.length();

	if(sizePrimary < sizeSecond) return false;

	int iterPrimary = (sizePrimary - sizeSecond) & 1;
	int iterSecond = 0;

	int temp = 0;
	for(; iterPrimary < sizePrimary; iterPrimary++) {
		if(temp == 1) {
			temp = 0;
		} else {
			if(iterSecond < sizeSecond && primary[iterPrimary] == second[iterSecond])
				iterSecond++;
			else temp++;
		}
	}

	return (iterSecond == sizeSecond);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		if(solve()) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}

