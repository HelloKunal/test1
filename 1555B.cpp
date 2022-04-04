#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int W, H;
		cin >> W >> H;
		
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		int w, h;
		cin >> w >> h;
		
		int w1 = x2 - x1, h1 = y2 - y1;
		
		int const inf = (int) 1e9;
		int ans = inf;
		if (w + w1 <= W)
		{
			ans = min (ans, max (0, w - x1));
			ans = min (ans, max (0, x2 - (W - w)));
		}
		if (h + h1 <= H)
		{
			ans = min (ans, max (0, h - y1));
			ans = min (ans, max (0, y2 - (H - h)));
		}
		
		cout << ((ans == inf) ? -1 : ans) << "\n";
	}
}

