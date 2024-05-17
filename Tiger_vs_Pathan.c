#include <stdio.h>
int main()
{
  int T;
  scanf("%d",&T);
  for(int t=0;t<T;t++){
    int N;
    scanf("%d",&N);
    char round[N+1];
    scanf("%s",&round);
    int tiger=0,pathaan=0;
    for(int i=0;i<N;i++){
        if(round[i]=='T'){
            tiger++;
        }
         else if(round[i]=='P'){
            pathaan++;
        }
    }
    if(tiger>pathaan){
        printf("Tiger\n");
    }
    if(tiger<pathaan){
        printf("Pathaan\n");
    }
    if(tiger==pathaan){
        printf("Draw\n");
    }
  }
return 0;
}