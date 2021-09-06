#include<bits/stdc++.h>
using namespace std;

int rom ( const char &a ) {
    if ( a == 'I' ) return 1;
    if ( a == 'V' ) return 5;
    if ( a == 'X' ) return 10;
    if ( a == 'L' ) return 50;
    if ( a == 'C' ) return 100;
    if ( a == 'D' ) return 500;
    if ( a == 'M' ) return 1000;
}

int convert[7] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
vector<char> result;

void ins (const int &a, const int &i) {
    if (a == 1) {
        result.push_back(convert[i-1]);
    }
    if (a == 2) {
        result.push_back(convert[i-1]);
        result.push_back(convert[i-1]);
    }
    if (a == 3) {
        result.push_back(convert[i-1]);
        result.push_back(convert[i-1]);
        result.push_back(convert[i-1]);
    }
    if (a == 4) {
        result.push_back (convert[i]);
        result.push_back (convert[i-1]);
    }
    if (a == 5) {
        result.push_back (convert[i]);
    }
    if (a == 6) {
        result.push_back(convert[i-1]);
        result.push_back(convert[i]);
    }
    if (a == 7) {
        result.push_back(convert[i-1]);
        result.push_back(convert[i-1]);
        result.push_back(convert[i]);
    }
    if (a == 8) {
        result.push_back(convert[i-1]);
        result.push_back(convert[i-1]);
        result.push_back(convert[i-1]);
        result.push_back(convert[ i ]);
    }
    if (a == 9) {
        result.push_back(convert[i+1]);
        result.push_back(convert[i-1]);
    }
}

int numeric (const vector<char> &r) {
    int sum = rom(r[r.size()-1]);
    for ( int i ( r.size () - 2); i > -1; i -- ) {
        if ( rom ( r [ i ] ) < rom ( r [ i + 1 ] ) )
        {
            sum -= rom ( r [ i ] );
        }
        else
        {
            sum += rom ( r [ i ] );
        }
    }
    return sum;
}

void romanic ( int a ) {
    if ( a > 1000 ){
        printf ( "CONCORDIA CUM VERITATE\n" );
        return;
    }
    int c = 1;
    int cipher;
    while ( true ) {

        cipher = a % 10;
        a /= 10;
        ins ( cipher, c );
        c += 2;
        if ( 10 > ( a * 10 ) ) break;
    }
    reverse ( result.begin (), result.end () );
    for ( int i ( 0 ); i < result.size (); i ++ ) printf ( "%c", result [ i ] );
    printf ( "\n" );
}

int t, first, second;
char temp;
int main () {
    cin >> t;
    getchar ();
    vector < char > r1, r2;
    for (  int test ( 0 ); test < t; test ++ ) {
        result.clear ();
        r1.clear ();
        r2.clear ();
        while ( true ) {
            temp = getchar ();
            printf ( "%c", temp );
            if ( temp == '+' ) break;
            r1.push_back ( temp );
        }
        while ( true ) {
            temp = getchar ();
            printf ( "%c", temp );
            if ( temp == '=' ) break;
            r2.push_back ( temp );
        }
        getchar ();
        first = numeric ( r1 );
        second = numeric ( r2 );
        romanic ( first + second );
    }
}
