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

bool compare1(pii& a, pii& b) {
    return abs(a.first) < abs(b.first);
}
bool compare2(pii& a, pii& b) {
    return abs(a.second) < abs(b.second);
}

void solve() {
    int n; cin>>n;
    vector<pii> a(n);
    vector<int> res(n, -1);
    fo(i, 0, n) {
        cin>>a[i].first;
        a[i].second = i;
    }
    if(n % 2 == 1) {
        if(a[0].first + a[1].first != 0) {
            res[a[0].second] = -a[2].first;
            res[a[1].second] = -a[2].first;
            res[a[2].second] = (a[0].first + a[1].first);
        } else if(a[0].first + a[2].first != 0) {
            res[a[0].second] = -a[1].first;
            res[a[2].second] = -a[1].first;
            res[a[1].second] = (a[0].first+a[2].first);
        } else {
            res[a[1].second] = -a[0].first;
            res[a[2].second] = -a[0].first;
            res[a[0].second] = (a[1].first+a[2].first);
        }

        fo(i, 3, n) {
            if(a[i+1].first > 0 && a[i].first > 0) {
                res[a[i].second] = abs(a[i+1].first);
                res[a[i+1].second] = -abs(a[i].first);
            } else if(a[i+1].first < 0 && a[i].first < 0) {
                res[a[i].second] = abs(a[i+1].first);
                res[a[i+1].second] = -abs(a[i].first);
            } else {
                res[a[i].second] = abs(a[i+1].first);
                res[a[i+1].second] = abs(a[i].first);                
            }
            i++;
        }

        // debug(res);
        fo(i, 0, n) {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    } else {        
        fo(i, 0, n) {
            if(a[i+1].first > 0 && a[i].first > 0) {
                res[a[i].second] = abs(a[i+1].first);
                res[a[i+1].second] = -abs(a[i].first);
            } else if(a[i+1].first < 0 && a[i].first < 0) {
                res[a[i].second] = abs(a[i+1].first);
                res[a[i+1].second] = -abs(a[i].first);
            } else {
                res[a[i].second] = abs(a[i+1].first);
                res[a[i+1].second] = abs(a[i].first);                
            }
            i++;
        }

        // debug(res);
        int sum = 0;
        fo(i, 0, n) {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}
 
 
 
 
signed main() {
    fast
    // intext();
    tc solve();
}