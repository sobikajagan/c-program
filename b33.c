#include <stdio.h>
#include <string.h>

int main(void)
{
int c=0,n,i;
char a[200];
scanf("%[^\n]%*c",a);
n=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]==' ')
{
  c++;
}
}
printf("%d",c);
  return 0;
}
