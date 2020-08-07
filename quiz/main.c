#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n1,n,l;

    printf("enter the no of rows and columns of the sq matrix\n");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int sumd1=0,sumd2=0;


    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
            sumd1=sumd1+a[i][j];
sumd2=0;

    for(i=0;i<n;i++)
     {

       for(j=(n-1);j>=0;j--)
        {

          sumd2=sumd2+a[i][j];
        }
     }

    printf("%d",sumd2);


}
