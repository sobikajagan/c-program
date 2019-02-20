#include <stdio.h>
#include <string.h>

int main(void) {
char a[100];
int c=0,i,n;
scanf("%[^\n]*c",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(((a[i]>='0' && a[i]<='9')||(a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')))
{

}
else
{
  c++;
}
}
printf("%d",c);
  return 0;
}
