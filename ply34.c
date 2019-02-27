#include <stdio.h>
#include <string.h>

int main(void) {
char a[100];
int i,n,s=0,g=0;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i=i+3)
{
  if(a[i]!=' ')
  {
    printf("%c",a[i]);
  }
}
  return 0;
}
