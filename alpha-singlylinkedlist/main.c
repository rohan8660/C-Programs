#include <stdio.h>
#include <stdlib.h>

struct list
{
    int count;
    struct node *head;   // pointers for the nodes / /
    struct node *pnew;
    struct node *ploc;
    struct node *ppre;
};

struct node
{
    char empname[15];
    struct node *link;
};

int main()
{
    int a,b,c;
    char nameofthelist[20];
    printf("Hello world!\n");

    printf("DO YOU WANT TO CREATE A SINGLY LINKED LIST(1/0)");
    scanf("%d",&a);

    struct list *lst;
    lst=(struct list *)malloc(sizeof(struct list));
    lst->count=0;
    lst->head=NULL;
    lst->ploc=NULL;
    lst->pnew=NULL;
    lst->ppre=NULL;

    if(a==1)
    {
        while(1)
        {
             printf("ENTER THE NAME OF THE LIST.\n");
            scanf("%s",nameofthelist);
            printf("ENTER THE OPTION AS REQUIRED \n");

            printf("1. ADD ITEM TO THE LIST.\n");
            printf("2. DELETE AN ITEM ON THE LIST.\n");
            printf("3. PRINT THE WHOLE LIST.\n");
            printf("4. EXIT THE PROGRAM.\n");
            scanf("%d",&b);

            switch(b)
            {
                case 1:
                    {
                        struct node *nnew,*nloc;
                        nnew=(struct node *)malloc(sizeof(struct node));
                        printf("ENTER THE DATA TO BE INSERTED IN THE  LIST \n");
                        scanf("%s",nnew->empname);
                        for(c=1;c<=lst->count;c++)
                        {

                        }
                        break;
                    }
                case 2:
                    {

                        break;
                    }
                case 3:
                    {

                        break;
                    }
                case 4:
                    {
                        printf("---------------------------\n");
                        printf("EXIT SUCCESSFULL\n");
                        printf("---------------------------\n");
                        printf("\n  THANK YOU FOR USING THIS PIECE OF SOFTWARE :)\n\n");
                        printf("                                       BY :-\n");
                        printf("                                       ROHAN R K \n");
                        printf("                                       INDIA(+91)\n");
                        printf("                                       8762248660\n");
                        exit(1);
                    }
                default:
                    {
                        printf("---------------------------\n");
                        printf("PLEASE ENTER A VALID OPTION\n");
                        printf("---------------------------\n");
                        break;
                    }
            }
        }
    }
    else
    {
        printf("\nTHANK YOU FOR USING THIS PIECE OF SOFTWARE\n\n");
        printf("                                BY :-\n");
        printf("                                ROHAN R K \n");
        printf("                                INDIA(+91)\n");
        printf("                                8762248660\n");
        exit(1);
    }
}
