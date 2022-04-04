// C++ program for implementation of KMP pattern searching
// algorithm
#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(string pat, int M, int* lps);
int res = 0;
// Prints occurrences of txt[] in pat[]
void KMPSearch(string pat, string txt)
{
	int M = pat.length();
	int N = txt.length();

	// create lps[] that will hold the longest prefix suffix
	// values for pattern
	int lps[M];

	// Preprocess the pattern (calculate lps[] array)
	computeLPSArray(pat, M, lps);

	int i = 0; // index for txt[]
	int j = 0; // index for pat[]
	while (i < N) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}

		if (j == M) {
			res++;
			j = lps[j - 1];
		}

		// mismatch after j matches
		else if (i < N && pat[j] != txt[i]) {
			// Do not match lps[0..lps[j-1]] characters,
			// they will match anyway
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
}

// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(string pat, int M, int* lps)
{
	// length of the previous longest prefix suffix
	int len = 0;

	lps[0] = 0; // lps[0] is always 0

	// the loop calculates lps[i] for i = 1 to M-1
	int i = 1;
	while (i < M) {
		if (pat[i] == pat[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar
			// to search step.
			if (len != 0) {
				len = lps[len - 1];

				// Also, note that we do not increment
				// i here
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

// Driver program to test above function
int main()
{
	int n, q; cin >> n >> q;
	string s; cin >> s;
	res = 0;
	string pat = "abc";
	KMPSearch(pat, s);
	for(int qu = 0; qu < q; qu++) {
		int pos; cin >> pos;
		char rep; cin >> rep;
		if(s[pos-1] != rep) {
			bool changed = false;
			// cout << "GONE OUT" << "\n";	
			if(s[pos-1] == 'a') {
				if(pos-1 < n-2 && s[pos] == 'b' && s[pos+1] == 'c') {res--; changed = true;}
			} else if(s[pos-1] == 'b') {
				if(pos-1 < n-1 && pos-2 >= 0 && s[pos-2] == 'a' && s[pos] == 'c') {res--; changed = true;}
			} else {
				if(pos-3 >= 0 && s[pos-3] == 'a' && s[pos-2] == 'b') {res--; changed = true;}
			}
	
				// cout << "GONE IN" << "\n";		
				if(rep == 'a') {
					if(pos-1 < n-2 && s[pos] == 'b' && s[pos+1] == 'c') res++;
				} else if(rep == 'b') {
					if(pos-1 < n-1 && pos-2 >= 0 && s[pos-2] == 'a' && s[pos] == 'c') res++;
				} else {
					if(pos-3 >= 0 && s[pos-3] == 'a' && s[pos-2] == 'b') res++;
				}

			s[pos-1] = rep;
		}  

		cout << res << "\n";
	}
	return 0;
}
