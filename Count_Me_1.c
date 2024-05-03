#include <stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int A[N];
  for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  int div2=0,div3=0;
  for(int i=0;i<N;i++){
    if(A[i]%2==0){
        div2++;
    }
     if(A[i]%3==0){
        div3++;
    }
    if(A[i]%3==0 && A[i]%2==0){
        div3--;
    }
  }
  printf("%d %d\n",div2,div3);
return 0;
}