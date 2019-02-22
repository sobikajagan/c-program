
#include <stdio.h>

int main()
{
int c,d,i,a,b,s,r;
    scanf("%d\t%d",&c,&d);
    for(i=c;i<d;i++)
    {
        a=i;
        b=i;
        s=0;
        while(a)
        {
            r=a%10;
            s=s+r*r*r;
            a=a/10;
        }
        if(i==s)
        {
            printf("%d ",i);
        }
    
    }
    return 0;
}
