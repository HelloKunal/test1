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

vector<int> t;
void build(int a[], int v, int tl, int tr, bool switcher) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm, !switcher);
        build(a, v*2+1, tm+1, tr, !switcher);
        if(switcher) t[v] = t[v*2] | t[v*2+1];
        else t[v] = t[v*2] ^ t[v*2+1];
    }
}

void update(int v, int tl, int tr, int pos, int new_val, bool switcher) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val, !switcher);
        else
            update(v*2+1, tm+1, tr, pos, new_val, !switcher);
        if(switcher) t[v] = t[v*2] | t[v*2+1];
        else t[v] = t[v*2] ^ t[v*2+1];
    }
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int N, M; cin >> N >> M;
	N = pow(2, N);
	int a[N];
	for(int i = 0; i < N; i++) cin >> a[i];
	t.assign(4*N, 0);
	bool switcher = (int)ceil(log2(N)) % 2 == 0 ? false : true;
	build(a, 1, 0, N-1, switcher);

	// for(int i = 0; i < 4*N; i++) {
	// 	cout << t[i] << "\n";
	// }

	for(int i = 0; i < M; i++) {
		int p, b; cin >> p >> b;
		update(1, 0, N-1, p-1, b, switcher);
		cout << t[1] << "\n";
	}
}

