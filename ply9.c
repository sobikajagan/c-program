#include <stdio.h>

int main(void) {
  int a,b,c,i,f=0,k;
  scanf("%d\t%d",&a,&b);
  for(i=a;i<=b;i++)
  {
    f=0;
    for(c=a;c<=i-1;c++)
    {
    if(i%c==0)
    {
      f=1;
      break;
 
    }
    }
    if(f==0)
    {
      k++;
   

    }
  }
     printf("%d\t",k);
  return 0;
}
