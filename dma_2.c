#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A,i;
    int *p;
    printf("Enter the size of the memory\n");
    scanf("%d", &A);
    p=(int*)malloc(A*sizeof(int));

    if(p==NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Memory allocated succesfully\n");
    }
    
    printf("Enter %d values\n", A);

    for(i=1;i<=A;i++)
    {
        scanf("%d", p+i);
    }
    for(i=1;i<=A;i++)
    {
        printf("value : %d ; Address : %p\n" , *(p+i), p+i);
    }

    free(p);
    return 0;
}