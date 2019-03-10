#include <stdio.h>
#include<string.h>

int main(void) {
 char a[100];
 int n,i,j,k;
 scanf("%s",a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
   j=a[i];
   if(j>='A' & j<='Z')
   {
     k=j+32;
     a[i]=k;
   }
   else if(j>='a' & j<='z')
   {
     k=j-32;
     a[i]=k;
   }
  }
  printf("%s",a);

  return 0;
}
