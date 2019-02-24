#include <stdio.h>
#include <string.h>

int main(void) 
{
  char a[100];
  int l,i,j;
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<2;i++)
  {
    printf("%c",a[i]);
  }
  for(j=2;j<l-2;j++)
  {
    printf("*");
  }
    for(i=l-2;i<=l-1;i++)
  {
    printf("%c",a[i]);
  }
  
  return 0;
}
