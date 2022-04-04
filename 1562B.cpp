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

bool res = false;
bool isPrime(long long int n)
{
	// Corner cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// This is checked so that we can skip
	// middle five numbers in below loop
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (long long int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

void printSubsequence(string input, string output, int n)
{
    // Base Case
    // if the input is empty print the output string
    if(res) return;
    if(n == 0) {
        if(isPrime(stoi(output)) == false) {
        	res = true;
        	cout << output.size() << "\n";
        	cout << output << "\n";
		}
        return;
	}
    if (input.empty()) {
        return;
    }
 
    // output is passed with including
    // the Ist character of
    // Input string
    printSubsequence(input.substr(1), output + input[0], n-1);
 
    // output is passed without
    // including the Ist character
    // of Input string
    printSubsequence(input.substr(1), output, n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int k; cin >> k;
		string s; cin >> s;
		
		res = false;
		for(int i = 1; i <= k; i++) {
			printSubsequence(s, "", i);
			if(res) break;
		}
		
		if(!res) cout << "-1\n";
	}
}


