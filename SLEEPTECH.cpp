#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void findMaxGuests(vector<int> arrl, vector<int> exit, int n, int B)
{
   sort(arrl.begin(), arrl.end());
   sort(exit.begin(), exit.end());
 
   int guests_in = 1, max_guests = 0, time = arrl[0];
   int i = 1, j = 0;
   B = B*(B+1)*0.5;
 
   while (i < n && j < n)
   {
      if (arrl[i] <= exit[j])
      {
          guests_in++;
 
          if (guests_in > max_guests)
          {
              if(arrl[i] > B) break;
              max_guests = guests_in;
              time = arrl[i];
          }
          i++; 
      }
      else 
      {    
          guests_in--;
          j++;
      }
   }
 
   cout << max_guests;
}

void solve() {
	int N, A, B; cin >> N >> A >> B;
	vector<int> start(N), end(N);
	for(int i = 0; i < N; i++) {
		cin >> start[i] >> end[i];
	}
	findMaxGuests(start,end, N, B);
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
        cout << "\n";
	}
}