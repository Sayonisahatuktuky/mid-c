#include <stdio.h>
int main()
{
  int T;
  scanf("%d",&T);
  for(int j=0;j<T;j++){
    char S[1001];
    scanf("%s",S);
    int alpha=0,small=0,digit=0;
    for(int i=0;S[i]!='\0';i++){
    if(S[i]>='A'&&S[i]<='Z'){
        alpha++;
    }
    else if(S[i]>='a'&&S[i]<='z'){
        small++;
    }
    else if(S[i]>='0'&&S[i]<='9'){
        digit++;
    }
  }
  printf("%d %d %d\n",alpha,small,digit);
  }
return 0;
}