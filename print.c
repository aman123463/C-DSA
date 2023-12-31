#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr;
    printf("enter total number of value :->");
    scanf("%d",&n);
     ptr=(float*)calloc(n,sizeof(float));
     for(int i=0;i<n;i++)
    {
       scanf("%d",(ptr+i));
    }
     for(int i=0;i<n;i++)
     {
        printf(" the enterd values are:-> %d",*(ptr+i));
     }

    //ptr=(int*)malloc(n*sizeof(int));
    printf("enter values :->");
    for(int i=0;i<n;i++)
    {
       scanf("%d",(ptr+i));
    }
     for(int i=0;i<n;i++)
     {
        printf(" the enterd values are:-> %d",*(ptr+i));
     }
     free(ptr);
     return 0;
}