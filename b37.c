#include <stdio.h>
#include <string.h>

int main(void) {
int a,b,i,n;
scanf("%d\t%d",&a,&b);
i=a;
a=b;
b=i;
printf("%d\t%d",a,b);
  return 0;
}
