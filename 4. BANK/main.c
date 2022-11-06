#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter age!\n");
    int age=0;
    scanf("%d",&age);
    printf("Enter no of days!\n");
    int n=0;
    scanf("%d",&n);
    printf("Enter amt!\n");
    int amt=0;
    scanf("%d",&amt);

    float inrst=0;

    if(age>65 && amt>50000)
        inrst+=1;
    if(n<=60 && n>=30)
        inrst+=6;
        int intamt = (inrst/100 )* amt;
        int res=amt+intamt;
    if(n<=90 && n>=61)
        inrst+=6.5;
        int intamt = (inrst/100 )* amt;
        int res=amt+intamt;
    if(n<=180 && n>=91)
        inrst+=7;
        int intamt = (inrst/100 )* amt;
        int res=amt+intamt;
    if(n<=365 && n>=181)
        inrst+=8;
        int intamt = (inrst/100 )* amt;
        int res=amt+intamt;
    if(n>365  )
        inrst+=8.5;
        int intamt = (inrst/100 )* amt;

        while(n>365){
            int res=amt+intamt;
            n=n-365;
        }
        // remaining days less than 365 days interest calculation
    res+= amt*n*(inrst/100)*(1/365)

    printf("Interest Rate :%f\n",inrst);
    printf("Result   :%d",res);
}
