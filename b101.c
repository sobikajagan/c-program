#include <stdio.h>
#include<string.h>

int main(void) {
 char a[100];
 int i,n,l;
 scanf("%s",a);
 scanf("%d",&n);
 l=strlen(a);
 for(i=l-n;i<=l;i++)
 {
   printf("%c",a[i]);
 }
  return 0;
}
