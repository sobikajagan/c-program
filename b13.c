#include<stdio.h>
int main()
{
  int n,i,flag=1;
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
     if(n%i==0)
     {
       flag=0;
       break;
     }
  }
  if(flag==1)
  {
   printf("yes");
  }
  else
  {
   printf("no");
  }  
  return 0;
}

