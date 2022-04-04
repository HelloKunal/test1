#include <iostream>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
        int x = 0, y = 0, z = 0;
	while ( N-- )
	{
                int temp;
                cin >> temp;
                x += temp;

                cin >> temp;
                y += temp;

                cin >> temp;
                z += temp;
	}

        if ( x == 0 && y == 0 && z == 0 )
                cout << "YES";
        else
                cout << "NO";

}
