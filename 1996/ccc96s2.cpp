#include <bits/stdc++.h>
using namespace std;

const int MM = 55;
char original[MM], cur[MM];

void subtract () {
    int Len = strlen(cur), dig = cur[Len-1] - '0';
    cur[Len-1]=0;
    Len--;
    cur[Len-1] -= dig;
    int t = Len-1;
    while(cur[t] < '0') {
        cur[t] += 10;
        cur[--t]--;
    }
    while(cur[0] == '0') {
        for(int i = 0; i < Len; i++) {
            cur[i] = cur[i+1];
        }
    }
}

int N;
int main () {
    scanf("%d\n", &N);
    for(int x = 1; x <= N; x++) {
        if(x > 1) printf("\n");
        gets(original);
        int L = strlen(original);
        memset(cur, 0, sizeof(cur));
        for(int i = 0; i < L; i++) {
            cur[i] = original[i];
        }
        cur[L] = 0;
        printf("%s\n", cur);
        while(strlen(cur) > 2) {
            subtract();
            printf("%s\n", cur);
        }
        if(strlen(cur) == 2 && cur[0] == cur[1]) {
            printf("The number %s is divisible by 11.\n", original);
        }
        else {
            printf("The number %s is not divisible by 11.\n", original);
        }
    }
}
