#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<math.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> index_multiset;
//typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> index_set;
#define se second
#define fi first
#define in insert
#define ll long long
#define pb push_back
#define mp make_pair
#define mem(a) memset(a,0,sizeof(a))
#define vll vector<ll>
#define vpll vector<pair<ll,ll>> 
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define mpll map<ll,ll>
#define mpdd map<double,double>
#define len(s) s.length()
#define sz(x) (int)(x).size()
std::mt19937 rnd(std::chrono::steady_clock::now().time_since_epoch().count());
//const ll mod=1e9+7;
const ll mod=998244353;
ll pow1(ll x,ll y)
{ll res=1;x=x%mod;if(x==0) return 0;while(y>0){if(y&1)res=(res*x)%mod;y=y>>1;x=(x*x)%mod; }return res;}
 
/*ll f[400005],inverse[400005];
ll divide(ll n) 
{return pow1(n,mod-2); } 
 
ll ncr(ll n, ll r) 
{if(n<r) return 0;return (f[n]*((divide(f[r]) * divide(f[n-r])) % mod)) % mod; } */
 
/*bool prime[1000001];
void sieve() {memset(prime, true, sizeof(prime));
for (ll i = 2; i * i <= 1000000; i++)if (prime[i])for (ll j = i * i; j <= 1000000; j+= i)prime[j] = false;
prime[0] = prime[1] = false;}
 
vll factorize(long long n) 
{   ll count = 0; vll fac;
    while (!(n % 2)) {n >>= 1;count++;}if (count%2)fac.pb(2ll);
    for (long long i=3; i<=sqrt(n);i+=2){count=0;while(n%i==0){count++;n = n / i;}
	if (count%2) fac.pb(i);}if (n > 2) fac.pb(n); return fac;}*/
	
// Solve whatever the problem rating is, whatever the number of submissions are. 
// Just solve.
 
/*ll spf[1000001];
 
void fastsieve() {spf[1]=1;for(int i=2;i<=1000000;i++) spf[i]=i;for (int i=4;i<=1000000;i+=2) spf[i] = 2; 
for (int i=3; i*i<=1000000; i++)
{if(spf[i]==i) {for (int j=i*i; j<=1000000; j+=i)if (spf[j]==j) spf[j] = i;}}}
 
/*vpll fastfactorize(ll n)
{
    vpll v;
    ll prev=0,cnt=0;
    while(n!=1)
    {
        if(prev==spf[n]) cnt++;
        else
        {
            if(prev) v.pb({prev,cnt});
            cnt=1;
            prev=spf[n];
        }
        n/=spf[n];
    }
    if(n==1)
    {
        v.pb({prev,cnt});
        cnt=1;prev=spf[n];
    }
    return v;
}*/
 
 
/*const ll root = 62;
 
void ntt(vll& a, vll& rt, vll& rev, ll n) 
{
	for (ll i = 0; i < n; ++i)
	if (i < rev[i]) swap(a[i], a[rev[i]]);
	
	for (ll k = 1; k < n; k *= 2)
	{
		for (ll i = 0; i < n; i += 2 * k) for (ll j = 0; j < k; ++j)
		{
			ll z = rt[j + k] * a[i + j + k] % mod, &ai = a[i + j];
			a[i + j + k] = (z > ai ? ai - z + mod : ai - z);
			ai += (ai + z >= mod ? z - mod : z);
	    }
	}
}
 
vll conv(const vll& a, const vll& b) 
{
	if (a.empty() || b.empty()) return {};
	ll s = sz(a)+sz(b)-1, B = 32 - __builtin_clz(s), n = 1 << B;
	vll L(a), R(b), out(n), rt(n, 1), rev(n);
	L.resize(n), R.resize(n);
	
	for (int i = 0; i < n; ++i) rev[i] = (rev[i / 2] | (i & 1) << B) / 2;
	
	ll curL = mod / 2, inv = pow1(n, mod - 2);
	
	for (ll k = 2; k < n; k *= 2) 
	{
		ll z[] = {1, pow1(root, curL /= 2)};
		for (ll i = k; i < 2*k; ++i) rt[i] = rt[i / 2] * z[i & 1] % mod;
	}
	ntt(L, rt, rev, n);
	ntt(R, rt, rev, n);
	for (ll i = 0; i < n; ++i) out[-i & (n-1)] = L[i] * R[i] % mod * inv % mod;
	ntt(out, rt, rev, n);
	return {out.begin(), out.begin() + s};
}*/