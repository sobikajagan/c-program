#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
  
   int i, j, a, n, b[30];
       
        scanf("%d", &n);
 
        
        for (i = 0; i < n; ++i)
            scanf("%d", &b[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (b[i] > b[j]) 
                {
 
                    a =  b[i];
                    b[i] = b[j];
                    b[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i =n-2;i<n-1;i++)
       {
            printf("%d\n", b[i]);
 
  }
  
     return 0;
}

