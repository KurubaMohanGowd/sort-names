#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int asc (const void* a,const void *b);

int main()
{
    int rows;
    printf("Enter the size: ");
    scanf("%d",&rows);
    //max size of column is 20
    int cols=20;
    char (*arr)[cols];
    //dynamic memory allocation 
    arr=malloc(rows * sizeof(char [cols]));
    if(arr==NULL)
    {
        printf("Memory allocation Failed!!");
        return -1;
    }
    int i,j,k;
    for(i=0;i<rows;i++)
    {
        printf("[%d] -> ",i);
        __fpurge(stdin);
        scanf("%[^\n]",arr[i]);
    }
    qsort(arr,rows,20,asc);
    // print the sorted array
    puts("The sorted names are:");
    for(i=0;i<rows;i++)
    {
        printf("%s\n",arr[i]);
    }
    free(arr);
}
int asc (const void * a, const void * b)
{
    return (*(char *)a > *(char *)b);
}
