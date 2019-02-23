#include <stdio.h>

int main(void) {
int a[100],i,j,n,m,k,s;
scanf("%d\t%d",&n,&s);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if(m<a[i])
            {
                m=a[i];
                k=i;
            }
        }
        a[k]=0;
    }
    printf("%d",m);

  return 0;
}
