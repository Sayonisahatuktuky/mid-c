#include <stdio.h>
#include <string.h>
int main()
{
  char S[100001];
  fgets(S,sizeof(S),stdin);
  int count_con=0;
  for(int i=0;S[i]!='\0';i++){
    if((S[i]>='a'&&S[i]<='z')||(S[i]>='A'&&S[i]<='Z')){
        if(S[i]!='a'&& S[i]!='e'&&S[i]!='i'&& S[i]!='o'&& S[i]!='u'&& S[i]!='A'&& S[i]!='E'&&S[i]!='I'&& S[i]!='O'&&S[i]!='U'){
            count_con++;
        }
    }
  }
  printf("%d\n",count_con);
return 0;
}