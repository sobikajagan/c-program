#include<stdio.h>
int main()
{
  int n,i,j,a,f;
  scanf("%d\t%d",&a,&n);
  for(i=a;i<=n;i++)
  {
    f=0;
    for(j=a;j<=i-1;j++)
    {
     if(i%j==0)
     {
       f=1;
       break;
     }
    }
  if(f!=1)
  {
   printf("%d\t",i);
  }
  } 
  return 0;
}
