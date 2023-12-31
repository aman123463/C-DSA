#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr;
    printf(" enter total no of element:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf(" enter values :");
    for(int i=0;i<n;i++)
    {
        scanf("%d\t",(ptr+i));
    }
    printf(" enter updated size of n:");
    scanf(" %d \n",&n);
    int *ptr1=(int*)realloc(ptr,n*sizeof(int));
    printf("\n previous address is -> %d\n",ptr);
    printf(" \n new block address->%d",ptr1);
     for(int i=0;i<n;i++)
     {
        printf("%d\t",*(ptr1+i));
     }
     free(ptr1);
}