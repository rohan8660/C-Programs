#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------------------------------\n");
    printf("\nPostal Rates!\n");
    printf("----------------------------------\n");
    printf("Enter the weight of post in grams: ");
    float wt=0;
    float amt=0;
    scanf("%f",&wt);
    if(wt>400)
        amt=(wt/1000)*0.25;
    else{
        if(wt <= 50)
            amt=0.50*(wt/10);
        if( 50 < wt && wt <= 150 )
            amt=2.5+0.40*((wt-50)/10);
        if( 150 < wt && wt <= 400 )
            amt=2.5+4+0.25*((wt-150)/10);
            }

    printf("\nAmount to be paid : Rs.%f\n\n\n",amt);
    return 0;
}
