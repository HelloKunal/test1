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

vi divisors;
void countDivisors(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                divisors.PB(n/i);
 
            else // Otherwise count both
                {
                    divisors.PB(i);
                    divisors.PB(n/i);
                }
        }
    }
}

int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

int maxCount = 0;

void solve() {
    int N, M; cin>>N>>M;

    if(M == 1) {
        cout<<0<<endl;
        return;
    }
    divisors.clear();
    countDivisors(M);
    if(divisors.size() == 0) {
        cout<<1<<endl;
        return;
    }
    sort(all(divisors));
    int n = divisors.size();
    int count = 0;
    vector<bool> elig(n, true);
    rfo(i, n-1, 0) {
        bool possible = true;
        fo(j, i+1, n) {
            if(elig[j] && lcm(divisors[i], divisors[j]) != M) {
                possible = false;
                elig[i] = false; 
                break;
            }
        }
        if(possible) count++;
    }
    // maxCount = 0;
    // memo.assign(divisors.size()+1, vi (M+1, -1));
    // fo(i, 0, divisors.size()) rec(0, M, divisors[i], 0);
    // debug(maxCount);
    divisors.clear();
    countDivisors(N);
    debug(divisors);
    if(divisors.size() == 0) {
        cout<<1<<endl;
        return;
    }
    // divisors.PB(1);
    // debug(divisors);
    sort(all(divisors));
    int res = *lower_bound(all(divisors), count);

    cout<<res<<endl;
}
 
signed main() {
    fast
    // intext();
    tc solve();
}