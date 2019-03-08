#include <stdio.h>

int main(void) {
  int a,i,j,b[10],flag=0;
  scanf("%d",&a);
  for(i=2;i<=a;i++)
  {
    if(a%i==0)
    {
      flag=1;
      for(j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
          flag=0;
			    break;
        }
			}
      if(flag==1)
      {
        printf("%d ",i);
	    }
    }
  }
  return 0;
}
