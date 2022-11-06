#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the Password (Max 8 characters) :");
    char pswd[8];
    int alpha=0,dig=0,spcl=0;
    scanf("%s",&pswd);
    for(int i=0;i<8;i++){
        if((pswd[i]!='\0') &&((isdigit(pswd[i])!=0)  ||  (isalpha(pswd[i])!=0))){
            if(isalpha(pswd[i])!=0)
                alpha+=1;
            if(isdigit(pswd[i])!=0)
                dig+=1;
        }
        else{
            if(pswd[i]!='\0')
        spcl+=1;
        }
    }

    if(alpha!=0 && dig!=0 && spcl!=0)
        printf("STRONG ! \n\n\n");
    if(alpha!=0 && dig!=0 && spcl==0)
        printf("MODERATE ! \n\n\n");
    if(alpha!=0 && dig==0 && spcl==0)
        printf("WEAK ! \n\n\n");
    printf("alpha: %d   digs: %d  spcl : %d",alpha,dig,spcl);
    return 0;
}
