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
		int Ax, Ay, Bx, By, Fx, Fy; cin >>Ax>>Ay >> Bx>>By >> Fx>>Fy;
		
		int res;
		if(Ax == Bx) {
			res = abs(By - Ay);
			if(Ax == Fx && abs(Ay - Fy) + abs(By - Fy) == abs(Ay - By)) res += 2;
		} else if(Ay == By) {			
			res = abs(Bx - Ax);
			if(Ay == Fy && abs(Ax - Fx) + abs(Bx - Fx) == abs(Ax - Bx)) res += 2;
		} else {
			res = abs(By - Ay) + abs(Bx - Ax);
		}
		
		cout << res << "\n";
	}
}


