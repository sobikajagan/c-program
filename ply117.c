#include <stdio.h>
#include <string.h>

int main(void) {
char a[100];
int l,i,j,m;
scanf("%s",a);
l=strlen(a);  
for(i=0;i<l-1;i++)
{
  printf("%c-",a[i]);
  
}
for(i=l-1;i<l;i++)
{
  printf("%c",a[i]);
}
  
  return 0;
}
