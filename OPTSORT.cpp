#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
    int n;cin >> n;
    int st = n-1;
    int res = 0;
    vector <int> a(n),b(n);
    for(int i=0; i < n; i++) cin>>a[i], b[i] = a[i];
    sort(b.begin(), b.end());
    while(st>0) {
        if(a[st]!=b[st]) {
            int maxIndex = b[st],minIndex = a[st];
            int i = st;
            // cout<<i<<"\n";
            while(i>0) {
                if(a[i] != b[st]) i--;
                else break;
                minIndex = min(a[i],minIndex);
            }
            int pos = lower_bound(b.begin(), b.end(), minIndex) - b.begin();
            for(int j=pos;j<i;j++) minIndex = min(minIndex,a[j]);
            while(b[pos] != minIndex) {
                pos = lower_bound(b.begin(), b.end(), minIndex) - b.begin();
                for(int j=pos;j<i;j++) minIndex = min(minIndex,a[j]);
            }
            res+=(maxIndex-minIndex);
            st = pos-1;
        }
        else st-=1;
    }
    cout << res << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // Remove in interactive problems
    int tests; cin >> tests;
    for(int test = 0; test < tests; test++) {
        solve();
        // cout << "\n";
    }
}