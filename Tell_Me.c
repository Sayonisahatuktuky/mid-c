#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    for (int j = 0; j < T; j++) {
        int N;
        scanf("%d", &N); 
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        int X;
        scanf("%d", &X);
        int found = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] == X) {
                found ++;
                break;
            }
        }

        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}