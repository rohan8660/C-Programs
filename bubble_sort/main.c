#include <stdio.h>
#include <stdlib.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int bubbleSort(int arr[], int n){
    for (int i=0;i<n-1;i++)
    for(int j=0;j<n-1-i;j++){
        if (arr[j+1]<arr[j])
            swap(&arr[j+1],&arr[j]);
    }
}

int main()
{
    printf("Hello world!\nThis is a sample program to understand Bubble_sort sorting algorithm.\n\n");
    int randomArray[]={3,6,9,12,27,24,30,21,18,15};

    //Calculating given array size
    int n=sizeof(randomArray)/sizeof(randomArray[0]);

    //Printing array before sorting
    printf("Array before sorting :\n");
    for (int i=0;i<n;i++)
        printf("%d \t",randomArray[i]);
    printf("\n\n");

    //Bubble Sort
    bubbleSort(randomArray,n);

    //Printing array after sorting
    printf("Array after sorting :\n");
    for (int i=0;i<n;i++)
        printf("%d \t",randomArray[i]);
    printf("\n");
}
