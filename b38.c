#include <stdio.h>
#include <string.h>

int main(void) {
int a,b,i;
scanf("%d\t%d",&a,&b);
b=b^a;
a=b^a;
b=b^a;
printf("%d\t%d",a,b);
  return 0;
}
