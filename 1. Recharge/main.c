#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------------------------------\n");
    printf("\tRecharge!\n");
    printf("----------------------------------\n");
    printf("Enter the amount of Recharge: ");
    int amt=0;
    scanf("%d",&amt);

    if (amt>499){
        printf("\nSelect a payment Method :\n1.GPay \n2.Phonepe \n3.Axis Credit Card\n");
        int opt=0;
        scanf("%d",&opt);
        switch(opt)

        {
            case 1:
                printf("\n\nAmount to be paid : Rs.%d\n\n\n",amt-100);
                break;
            case 2:
                printf("\n\nAmount to be paid : Rs.%d\n\n\n",amt-50);
                break;
            case 3:
                printf("\n\nAmount to be paid : Rs.%d\n\n\n",amt-200);
                break;
            default:
                printf("\n\nRestart and Enter a correct option\n\n\n");
        }
    }

    else
        printf("\n\nAmount to be paid : Rs.%d\n\n\n",amt);
        return 0;
    }
