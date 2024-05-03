#include <stdio.h>
#include <string.h>
int main()
{
  char S[10001];
  scanf("%s", S); 
  int i, cnt[26]={0};
 for(i=0;S[i]!='\0';i++)
  {
    int v=S[i]-'a';
    cnt[v]++;
  }
  for(i=0;i<26;i++){
    if(cnt[i]!=0){

      printf("%c - %d\n",i+'a',cnt[i]);
    }
  }
return 0;
}