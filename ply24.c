#include <stdio.h>

int main(void) {
 int a[100],i,f=0;
 scanf("%d",a);
 for(i=0;i<10;i++)
 {
  if(a[i]>=0 && a[i]<=9)
  {
    f--;
    break;
  }
  else
  {
    f++;
    break;
  }
 }
 if(f<=0)
  {
    printf("no");
  }
  if(f>=0)
  {
    printf("yes");
  }
  return 0;
}
