#include <bits/stdc++.h>
using namespace std;
int T, N, K;

int main () {
    cin >> T;
    for(int i = 1; i <= T; i++) {
        int pattern[30] = {0};
        cin >> N >> K;
        for(int j = 0; j < K; j++) {
            pattern[j] = 1;
        }
        cout << "The bit patterns are\n";
        do {
            for(int j = 0; j < N; j++) {
                cout << pattern[j];
            }
            cout << "\n";
        } while(prev_permutation(pattern, pattern+N));
        cout << "\n";
    }
}
