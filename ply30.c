#include <stdio.h>
#include <string.h>

int main(void) {
 char a[10],b[10];
 int n,c,d,f=0,i;
 scanf("%s\t%s\t%d",a,b,&n);
 c=strlen(a);
 d=strlen(b);
 for(i=0;i<c;i++)
 {
   if(a[i]==b[i])
   {
     f+=0;
   }
   else
   {
     f+=1;
   }
 }
 if(f==n)
 {
   printf("yes");
   }
   else
   {
   printf("no");
   }
 

  return 0;
}
