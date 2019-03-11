#include <stdio.h>

int main(void) {
  int a[100],b[10],n,i,j,c=0,k,v,s=0,m;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {

      if(a[i]>a[j])
      {
        v=a[i];
        a[i]=a[j];
        a[j]=v;
      }
    }
    
  }
  
  s=a[1]-a[0];
  printf("%d",s);
  return 0;
}
