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

void solve() {
    int l, r, k; cin>>l>>r>>k;
    if(l == r) {
        if(l == 1) cout<<"NO\n";
        else {
            cout<<"YES\n";
        }
        return;
    }
    int noOfOdds = 0;
    if(l % 2 == 0 && r % 2 == 0) noOfOdds = ((r - l + 1) / 2);
    else if(l % 2 == 1 && r % 2 == 1) noOfOdds = ((r - l + 1) / 2) + 1;
    else noOfOdds = ((r - l + 1) / 2);
    debug(noOfOdds);
    if(k < noOfOdds) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
}
 
 
 
 
signed main() {
    fast
    // intext();
    tc solve();
}
