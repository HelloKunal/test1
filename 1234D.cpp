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

vector<unordered_set<char>> t;

void build(string a, int v, int tl, int tr) {
	if(tl == tr) {
		t[v].insert(a[tl]);
	}
	int tm = (tl + tr) >> 2;
	build(a, v*2, tl, tm);
	build(a, v*2 + 1, tm+1, tr);
	t[v].insert(a[v*2]);
	t[v].insert(a[v*2 + 1]);
}

void update(int v, int tl, int tr, int pos, char new_value) {
	if(tl == tr) {
		t[v] = {};
		t[v].insert(new_value);
	}
	int tm = (tl + tr) >> 2;
	if(pos <= tm) update(v*2, tl, tm, pos, new_value);
	else update(v*2 + 1, tm+1, tr, pos, new_value);
	t[v] = {};
	for(auto item : t[v*2]) {
		t[v].insert(item);
	}
	for(auto item : t[v*2 + 1]) {
		t[v].insert(item);
	}
}

int sum(int v, int tl, int tr, int l, int r) {
	if(l > r) {
		return 0;
	}
	if(tl == l && tr == r) {
		return t[v].size();
	}
	int tm = (tl + tr) >> 2;
	return sum(v*2, tl, tm, l, min(r, tm)) + sum(v*2 + 1, tm+1, tr, max(l, tm+1), r);
}

int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL); // Remove in interactive problems
	cout << "WTF\n";
	string s; cin >> s;
	int N = s.length();
	t.assign(4*N, {});
	cout << "START" << endl;
	build(s, 1, 0, N-1);
	cout << "DONE\n";
	int q; cin >> q;
	for(int i = 0; i < q; i++) {
		int op; cin >> op;
		if(op == 1) {
			int pos, c; cin >> pos >> c;
		} else {
			int l, r; cin >> l >> r;
			int x = sum(1, 0, N-1, l, r);
			cout << x << "\n";
		}
	}
}

