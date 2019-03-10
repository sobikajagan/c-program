#include <stdio.h>
#include <string.h>

int main(void) {
  int a[10],n,i,j,m,k=0;
  scanf("%d\t%d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    j=a[i]+j;
    if(j==m)
    {
     k++;
     break;
    }
  }
  if(k!=0)
   printf("yes");
   else
   printf("no");
  return 0;
}
