//           _         _                  _          _             _            _            _            _             _      
//          /\_\      /\_\               /\ \       /\ \     _    /\ \         /\ \         /\ \         _\ \          /\ \    
//         / / /  _  / / /         _    /  \ \     /  \ \   /\_\ /  \ \       /  \ \       /  \ \____   /\__ \        /  \ \   
//        / / /  /\_\\ \ \__      /\_\ / /\ \ \   / /\ \ \_/ / // /\ \ \     / /\ \ \     / /\ \_____\ / /_ \_\      / /\ \ \  
//       / / /__/ / / \ \___\    / / // / /\ \_\ / / /\ \___/ // / /\ \ \   / / /\ \ \   / / /\/___  // / /\/_/     / / /\ \_\ 
//      / /\_____/ /   \__  /   / / // / /_/ / // / /  \/____// / /  \ \_\ / / /  \ \_\ / / /   / / // / /         / /_/_ \/_/ 
//     / /\_______/    / / /   / / // / /__\/ // / /    / / // / /   / / // / /   / / // / /   / / // / /         / /____/\    
//    / / /\ \ \      / / /   / / // / /_____// / /    / / // / /   / / // / /   / / // / /   / / // / / ____    / /\____\/    
//   / / /  \ \ \    / / /___/ / // / /      / / /    / / // / /___/ / // / /___/ / / \ \ \__/ / // /_/_/ ___/\ / / /______    
//  / / /    \ \ \  / / /____\/ // / /      / / /    / / // / /____\/ // / /____\/ /   \ \___\/ //_______/\__\// / /_______\   
//  \/_/      \_\_\ \/_________/ \/_/       \/_/     \/_/ \/_________/ \/_________/     \/_____/ \_______\/    \/__________/                       

#include <bits/stdc++.h>
using namespace std;
#define int             long long int
#define mod             1000000007
#define fast            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(x,start,end)for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define vi              vector <int>
#define pii             pair< int ,int >
#define all(v)          v.begin(),v.end()
#define PB              push_back
#define MP              make_pair
#define ff              first
#define tc              int t; cin>>t; while(t--)
#define ss              second
#define fo(i, a, b)     for (int i = a; i < b; i++)
#define rfo(i, a, b)    for (int i = a; i >= b; i--)
#define f(i,container)  for(auto &i:container)
#define endl            "\n"
#define ceild(a, b)     ((a) / (b) + ((a) % (b) != 0))
#define sz(a)           (int)a.size()
#ifndef                 ONLINE_JUDGE
#define debug(x)        cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t)      {cerr << t;}
void _print(string t)   {cerr << t;}
void _print(char t)     {cerr << t;}
void _print(double t)   {cerr << t;}
 
template <class T, class V>     void _print(pair <T, V> p);
template <class T>              void _print(vector <T> v);
template <class T>              void _print(set <T> v);
template <class T, class V>     void _print(map <T, V> v);
template <class T>              void _print(multiset <T> v);
template <class T, class V>     void _print(pair <T, V> p)          {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T>              void _print(vector <T> v)           {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>              void _print(set <T> v)              {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>              void _print(multiset <T> v)         {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V>     void _print(map <T, V> v)           {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V>     void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
void intext() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
}

// declare variables
vector<vi> dp;

int rec(vi &sign, vi &dist, int n, int k) {
    if(n == 0) return 0;
    if(n == 1) return dist[n-1]*sign[n-1];
    debug(dist);
    if(k > 0) {
        dist[n-2] += dist[n-1];
        int first = rec(sign, dist, n-1, k-1);
        dist[n-2] -= dist[n-1];
        int second = rec(sign, dist, n-1, k) + (dist[n-1]*sign[n-1]);
        return min(first, second);
    } else {
        return rec(sign, dist, n-1, k) + (dist[n-1]*sign[n-1]);
    }
}

void solve() {
    int n, l, k; cin>>n>>l>>k;
    vi sign(n), distTemp(n+1);
    fo(i, 0, n) cin>>distTemp[i];
    fo(i, 0, n) cin>>sign[i];
    distTemp[n] = l;
    vi dist(n);
    fo(i, 0, n) {
        dist[i] = distTemp[i+1] - distTemp[i];
    }
    debug(dist);
    debug(sign);

    // dp.assign(501, vi (501, -1));
    cout<<rec(sign, dist, n, k)<<endl;
}
 
 
 
 
signed main() {
    fast
    // intext();
    solve();
}

