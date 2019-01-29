#include<stdio.h>
#include<math.h>
int main()
{
  int a[100],n,k,i,j;
  scanf("%d\t%d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==k || a[i]+a[i+1]==k)
    {
      printf("YES");
      goto j;
    }
  }
    if(a[i]!=k || a[i]+a[i+1]!=k)
    {
     printf("NO");
     
   }
  j:
return 0;
}
