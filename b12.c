#include <stdio.h>

int main()
{
    int n,res=0,r,temp;
    scanf("%d",&n);
    temp=n;
  
    while(n!=0)
    {
      r=n%10;
      res=res*10+r;
      n=n/10;
    }
    if(temp==res)
    {
      printf("yes");
    }
    else
    {
       printf("no");
    }
   
   return 0;
}
