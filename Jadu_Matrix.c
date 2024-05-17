#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int A[N][M];
    int flag = 1; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
            if ((i != j && i+j!= N - 1) && A[i][j] != 0) {
                flag = 0;
                break;
            }
        
            else if ((i == j || i+j == N - 1 ) && A[i][j]!= 1) {
                 flag= 0;
                break;
            }
        } 
    }
    if (flag==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
