/*******************************************************************
    PROGRAM TO SORT NAMES ALPHABETICALLY USING LINKED LIST
****************************************************************/

/*This program takes a set of strings as input and sorts them alphabetically before displaying */
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

    void create(void);
        void disp(void);
        void sort(void);

struct name
    {
        char info[20];
        struct name *link;
      }*ptr,*start,*node;

typedef struct name list;

int main()
    {

 // clrscr();
        printf("Program to enter the names and sort them using linked list.\n");
        create();   //fun to enter the names
        printf(" The contents of the list were : \n");
        disp();     //fun to display the data
        sort();     //fun to sort the data
        printf("\n\nAfter sorting :\n");
        printf("The contents of the list are :");
        disp();
        getch();
    }










//-------------------------------------------
void create(void)
    {
        char ch='y';
        node=(list *)malloc(sizeof(list));
        start=node;
        while(ch=='y')
        {
            printf("Enter the name :\n");
            gets(node->info);
            ptr=node;
            node=(list *)malloc(sizeof(list));
            ptr->link=node;
            printf("Want to continue?(y/n)");
            fflush(stdin);
            scanf("%c",&ch);
            if(ch=='n')
              break;
            ch='y';
        }
       ptr->link=NULL;
    }

//-------------------------------------------

   void disp(void)
    {
       ptr=start;
       while(ptr!=NULL)
     {
      printf("\n%s",ptr->info);
      ptr=ptr->link;
     }
     }

//-------------------------------------------

     void sort(void)
    {
     int comp(char [],char []);
     int i;
     char temp[20],s1[20],s2[20];
     list *ptr2;
     for(ptr=start;ptr!=NULL;ptr=ptr->link)
       {
     for(ptr2=ptr->link;ptr2!=NULL;ptr2=ptr2->link)
       {
     strcpy(s1,ptr->info);
     strcpy(s2,ptr2->info);
     i=comp(s1,s2);
     if(i==1)
       {
    strcpy(temp,ptr->info);
    strcpy(ptr->info,ptr2->info);
    strcpy(ptr2->info,temp);
        }
    }
}
}
//-------------------------------------------
int comp(char s1[], char s2[]) {
   return (strcmp(s1,s2));
}
