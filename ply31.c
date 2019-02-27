#include <stdio.h>
#include <string.h>

int main(void) {
char a[100];
int i,n,s=0,g=0;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
  if(a[i]==')')
  {
    s++;
  }
  else if(a[i]=='(')
  {
    g++;
  }
}
if(s==g)
{
  printf("yes");
}
else
{
  printf("no");
}
  return 0;
}
