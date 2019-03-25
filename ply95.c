#include <stdio.h>
#include <string.h>

int main(void) {
char a[100];
int n,k,i,j,c;
scanf("%s\t%d\t%d",a,&n,&k);
c=n+k;
printf("%c",a[c-1]);
  return 0;
}
