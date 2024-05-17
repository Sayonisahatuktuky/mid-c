#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long int M;
        int A, B, C;
        scanf("%lld %d %d %d", &M, &A, &B, &C);
        
        long long ABC = (long long)A * B * C;
        long long missnum = (M == 0) ? 0 : M / ABC;
        if (M == 0) {
            if (ABC == 0){
                missnum = 0;
                }
            printf("%lld\n", missnum);
        }
        else{
            if (missnum * ABC != M || missnum == A || missnum == B || missnum== C)
            printf("-1\n");
        else{
            printf("%lld\n", missnum);
        }
    }
    }
    return 0;
}
