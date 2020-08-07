#include <stdio.h>
#include <stdlib.h>
#include"BST.h"

int compareint(void*num1,void*num2);
void printBST(void*num1);
int main(void)
{
    printf("Hello world!\n\n\n");
    BST_TREE*BSTRoot;
    int*dataptr;
    int datain=+1;
    printf("BEGIN BST DEMO\n");
    BSTRoot=BST_Create(compareint);
    printf(""ENTER A LIST OF POSITIVE INTEGERS\n"\n");
    printf("ENter a negative number to stop\n");
    do
}
