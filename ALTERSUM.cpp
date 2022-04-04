#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int N; cin >> N;
	vector<int> A(N);
	int sum = 0;
	bool iter = true;
	for(int i = 0; i < N; i++) {
		cin >> A[i];
		if(iter) sum += A[i];
		else sum -= A[i];
		iter = !iter;
	}

	int sumTemp = sum;
	int minSum = sum, minI = 0;
	iter = true;
	int sum1 = 0, maxHere = 0;
	for(int i = 1; i < N; i++) {
		if(iter) {sum -= A[i-1]; sum1 += A[i-1];}
		else {sum += A[i-1]; sum1 -= A[i-1];}
		iter = !iter;
		if(sum < minSum) {
			minSum = sum;
			minI = i;
		}
	}
	// cout << minSum << "\n";
	// cout << minI << "\n";

	// int possibleRes = sum;
	// int sumHereSecond = sum;
	// int sumHere = 0;
	// sumHere += A[0];
	// sumHereSecond -= A[0];
	// int remainEle = N-1;
	// if(remainEle % 2 == 0) possibleRes = max(possibleRes, - sumHereSecond + sumHere);
	// else possibleRes = max(possibleRes, - sumHereSecond - sumHere);
	// for(int i = 1; i+1 < N; i++) {
	// 	sumHere -= A[i];
	// 	sumHereSecond += A[i];
	// 	sumHere += A[i+1];
	// 	sumHereSecond -= A[i+1];
	// 	int remainEle -= 2;
	// 	if(remainEle % 2 == 0) possibleRes = max(possibleRes, - sumHereSecond + sumHere);
	// 	else possibleRes = max(possibleRes, - sumHereSecond - sumHere);
	// }

	int sumPrev = 0;
	iter = true;
	for(int i = 0; i < minI; i++) {
		if(iter) sumPrev += A[i];
		else sumPrev -= A[i];
		iter = !iter;
	}

	// cout << sumPrev << "\n";

	int firstSum = 0, secondSum = minSum;
	int res = sumTemp;
	int remEle = N - minI;

	if(remEle % 2 == 0)	res = max(res, sumPrev - secondSum);
	else res = max(res, - sumPrev - secondSum);

	if(iter) {
		firstSum += A[minI];
		secondSum -= A[minI];
		remEle--;
		if(remEle % 2 == 0)	res = max(res, sumPrev + firstSum - secondSum);
		else res = max(res, sumPrev - firstSum - secondSum);

		for(int i = minI+1; (i+1) < N; i+=2) {
			firstSum -= A[i];
			secondSum += A[i];
			firstSum += A[i+1];
			secondSum -= A[i+1];
			remEle -= 2;
			if(remEle % 2 == 0)	res = max(res, sumPrev + firstSum - secondSum);
			else res = max(res, sumPrev - firstSum - secondSum);
		}		
	} else {
		firstSum -= A[minI];
		secondSum += A[minI];
		remEle--;
		if(remEle % 2 == 0)	res = max(res, sumPrev + firstSum - secondSum);
		else res = max(res, sumPrev - firstSum - secondSum);

		for(int i = minI+1; (i+1) < N; i+=2) {
			firstSum += A[i];
			secondSum -= A[i];
			firstSum -= A[i+1];
			secondSum += A[i+1];
			remEle -= 2;
			if(remEle % 2 == 0)	res = max(res, sumPrev + firstSum - secondSum);
			else res = max(res, sumPrev - firstSum - secondSum);
		}		

	}

	res = max(res, sumTemp);

	cout << res << "\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

