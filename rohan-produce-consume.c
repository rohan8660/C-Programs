#include<stdio.h>
void main()
{
    int stock,min,max,i,choice,n;
    stock=0;
    min=0;
    max=100;
    printf("===========================================================================================\n");
    printf("Initial Stock = %d \n",stock);
    printf("Minimum Stock = %d \n",min);
    printf("Maximum Stock = %d \n",max);
    printf("===========================================================================================");

    while(1)
    {
        printf("\n\n===========================================================================================\n");
        printf("1.Produce \t 2.Consume \t 3.Display \t 4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: if(stock==max)
                    {
                        printf("Sorry , Storage is full :\n");
                    }
                    else
                    {
                        printf("Enter the number of items to produce: ");
                        scanf("%d", &n);
                        if (n+stock <= max)
                        {
                            stock=stock+n;
                            printf("Current Stock = %d\n",stock);
                        }
                        else
                        {
                            printf("Sorry , Storage cant hold that much :\n");
                        }
                    }
                    break;


            case 2: if (stock==min)
                        {
                            printf("Sorry , Storage is empty :\n");
                        }
                        else
                        {
                            printf("Enter the number of items to consume: ");
                            scanf("%d", &n);
                            if (stock-n >= min)
                            {
                                stock=stock-n;
                                printf("Current Stock = %d\n",stock);
                            }
                            else
                            {
                                printf("Sorry , Storage doesn't have that much :\n");
                            }
                        }
                        break;


            case 3: printf("Current Stock = %d\n",stock);
                    break;

            case 4 : printf("\n \t THANK YOU ! \n\n\n");
                     exit(0);

            default : printf("Please enter a valid choice :\n");
        }
    }

}
