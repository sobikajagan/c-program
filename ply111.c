#include <stdio.h>

int main(void) {
  int a[10],b[100],c[100],n,m,i,j,k;
  scanf("%d\t%d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(a[i]==b[j])
      {
        c[i]=a[i];
        printf("%d",c[i]);
      }
    }
  }
 
    return 0;
}
