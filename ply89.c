#include <stdio.h>

int main(void) {
int n,k,i,j,a=1,b=1,s;
scanf("%d\t%d",&n,&k);
s=n-k;
for(i=1;i<=n;i++)
{
  a=a*i;
}
for(i=1;i<=s;i++)
{
  b=b*i;
}
printf("%d",(a/(b)));

return 0;
}
