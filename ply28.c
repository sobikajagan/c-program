#include <stdio.h>
#include<string.h>

int main(void) {
 char a[100];
 int n,i;
 scanf("%[^\n]%*c",a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
   if(a[i]!=' '||a[i-1]==' ')
   {
     printf("%c",a[i]);
   }
  }
  return 0;
}
