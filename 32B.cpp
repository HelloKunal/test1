#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
        cin >> s;
        string decoded = "";
        char prev = 'A';
        for ( int i = 0, j = s.length(); i < j; i++ )
        {
                char temp = s[ i ];
                switch ( temp )
                {
                        case '.':
                        {
                                if ( prev == '-' )
                                {
                                        prev = 'A';
                                        decoded += '1';
                                }
                                else
                                {
                                        decoded += '0';
                                        prev = 'A';
                                }
                                break;
                        }
                        case '-':
                        {
                                if ( prev == '-' )
                                {
                                        prev = 'A';
                                        decoded += '2';
                                }
                                else
                                {
                                        prev = '-';
                                }
                                break;
                        }
                }
        }
        cout << decoded;
}
