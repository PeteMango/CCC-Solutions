#include <bits/stdc++.h>
using namespace std;
int T, N;

void compute (int a, int b, int c) {
    int rnd=0;
    while(a != 1 || b != 1) {
        printf("Round %d: %d undefeated, %d one-loss, %d eliminated\n", rnd, a, b, c);
        c += b/2;
        b = ceil(b / 2.0);
        b += a/2;
        a = ceil(a / 2.0);
        rnd++;
    }
    printf("Round %d: %d undefeated, %d one-loss, %d eliminated\n", rnd, a, b, c);
    a--; b++; rnd++;
    printf("Round %d: %d undefeated, %d one-loss, %d eliminated\n", rnd, a, b, c);
    b--; c++; rnd++;
    printf("Round %d: %d undefeated, %d one-loss, %d eliminated\n", rnd, a, b, c);
    printf("There are %d rounds.\n", rnd);
}

int main () {
    cin >> T;
    while(T--) {
        cin >> N;
        int a=N, b=0, c=0;
        compute(a, b, c);
    }
}
