#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p = &a;
    int *arr;
    int n;
    
    printf("enter the number of integers to allocate memory for: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {   
        printf("memory allocation failed\n");
        return 1;
    }
    printf("enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
    {
        printf("enter integer %d: ", i+1);
        scanf("%d", arr+i);
    }
    printf("the integers you entered are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(arr+i));
    }
    free(arr);
    return 0;
    }
    