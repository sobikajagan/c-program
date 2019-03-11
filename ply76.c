#include <stdio.h>

int main(void) {
  int a[10],n,i,c=0,k,v,s=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    {
      c+=1;
      k=a[i];
    }
    else
    {
      s+=1;
      v=a[i];
    }
  }
  if(c==1)
  {
    printf("%d",k);
  }
  else
  {
    printf("%d",v);
  }
  return 0;
}
