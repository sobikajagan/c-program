#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],b;
    int i,j,n,m=0,c=0;
    scanf("%[^\n]%*c",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]=='+')
        {

        }
        
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='+';
            }
        }
        if(c>=m)
        {
            m=c;
            b=a[i];
        }
    }
    printf("%c ",b);
    
	return 0;
}
