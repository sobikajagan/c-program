#include<stdio.h>
#include<string.h>
int main()
{
int a,n=1,i,j,c=0,k;
scanf("%d\t%d",&a,&k);
  for(i=0;i<a;i++)
  {
    n*=k;
   if(n==a)
    {
      c=1;
      break;
    }
  }
  if(c==1)
    printf("yes");
  else
  printf("no");
  return 0;
}
