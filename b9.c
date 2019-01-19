#include <stdio.h>

int main()
{
    int n,i,c=0,a[10],k;
    scanf("%d\t%d",&n,&k);
    
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
    
    for(i=1;i<=k;i++)
    {
     c=c+i;
    }
  printf("%d",c);
    return 0;
}
