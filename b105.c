#include <stdio.h>
#include<string.h>

int main(void) {
 int a,b;
 scanf("%d\t%d",&a,&b);
 char x[10],y[10];
 sprintf(x, "%d",a);
 sprintf(y, "%d",b);
 strcat(x,y);
 printf("%s",x);
 

  return 0;
}
