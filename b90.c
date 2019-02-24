#include <stdio.h>
#include <string.h>

int main(void) 
{
  char n[100];
  int i,l;
  scanf("%s",n);
  l=strlen(n);
  for(i=0;n[i]!='\0';i++)
  {
  if(n[i]>='0' && n[i]<='9')
  {
    printf("%c",n[i]);
  }
  }

  return 0;
}
