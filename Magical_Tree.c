#include <stdio.h>

void Triangle(int N)
{
    int n=0.5*N+5.5;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
   }
  }
void pole(int N){
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf(" ");
    }
    for(int j=1;j<=N;j++){
        printf("*");
    }
    printf("\n");
  }
}
int main()
{ 
    int N;
   scanf("%d",&N);
   Triangle(N);
   pole(N);
return 0;
}