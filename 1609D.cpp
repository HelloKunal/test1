#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

/* Iterative Function to calculate (x^y)%p in O(log y) */
int powerUnderMod(int x, int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
    if (y == 0) return 1; // In case y is 0
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

// used for custom hashing in unordered_map , unordered_set to prevent hacking
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

class DSU {
private:
    vector<int> parent;
    vector<int> rank;
    int size;
    int specials;
public:
    DSU(int size) {
        this->size = size;
        specials = 1;
        parent.resize(size+1);
        for(int i = 1; i <= size; i++) {
            parent[i] = i;
        }
        rank.assign(size+1, 1);
    }
    int find_set(int v) {
        if(v == parent[v]) return v;
        return parent[v] = find_set(parent[v]);
    }
    void union_sets(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if(a != b) {
            if (rank[a] < rank[b])
            swap(a, b);
            parent[b] = a;
            rank[a] += rank[b];
            // cout << parent[b] << " " << parent[a] << "\n";
        } else specials++;
    }
    int returnMax() {
        int maxEle = 0;
        if(specials) {
            // vector<int> temp;
            // for(int i = 1; i <= size; i++) {
            //     if(i == parent[i]) temp.push_back(rank[i]);
            // }
            // sort(temp.begin(), temp.end(), greater<int>());
            // for(int i = 0; i < specials && i < temp.size(); i++) maxEle += temp[i];
            priority_queue<int> temp;
            for(int i = 1; i <= size; i++) {
                if(i == parent[i]) {
                    temp.push(rank[i]);
                }
            }
            for(int i = 0, j = temp.size(); i < specials && i < j; i++) {
                maxEle += temp.top(); temp.pop();
            }
            return maxEle;
        } else {
            for(int i = 1; i <= size; i++) maxEle = max(maxEle, rank[i]);
            return maxEle;            
        }
    }
};

void solve() {
    int n, d; cin >> n >> d;
    DSU dsu1(n);
    // cout << "START\n";
    for(int i = 0; i < d; i++) {
        int a, b; cin >> a >> b;
        dsu1.union_sets(a, b);
        // cout << "WHAT\n";
        cout << dsu1.returnMax()-1 << "\n";
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	solve();
}

