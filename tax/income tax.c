#include<stdio.h>
void main()
{
    float income,tax;
    printf("enter the income");
    scanf("%f",&income);
    if(income<=250000)
        tax=0;
    else
        if(income>250000 && income<=500000)
        tax=0.1*(income-250000);
    else
        if(income>500000 && income<=1000000)
        tax=0.2*(income-500000)+25000;
    else
        if(income>1000000)
        tax=0.3*(income-1000000)+125000;
    printf("your income amount is Rs% 2f",income);
    printf("you have pay the tax Rs% 2f",tax);
}
