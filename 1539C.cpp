#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int n, k, x;
vector <long double> vect;

int main ()
{
	scanf("%d%d%d", &n, &k, &x);
	long double a [n];
	for (int i = 0; i < n; i++)
		scanf ("%Lf", &a [i]);
	
	sort (a, a + n);
	
	long double prev_level = a [0];
	
	for (int i = 1; i < n; i++)
	{
		long double diff = a [i] - prev_level;
		
		if (diff > x)
			vect.push_back (diff);
		
		prev_level = a [i];
	}
	
	sort (vect.begin(), vect.end());
	
	int size = vect.size();
	
	for (auto i = vect.begin(); i < vect.end(); i++)
	{
		if (k <= 0)
			break;
		
		long double diff = *i;
		printf("%Lf -> %Lf\n", diff, ceil (diff / x));
		printf("00000000000\n");
		int sub = ceil (diff / x) - 1;
		k -= sub;
		size--;			
	}
		
	printf("%d\n", size + 1);
}

