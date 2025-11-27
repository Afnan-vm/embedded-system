
#include <stdio.h>

int main()
{
    int num,count = 0;
    printf("printing number");
    scanf("%d", &num);
    
    printf("printing numbers from 0 to %d\n", num);
    while ( count <= num)
    {
        printf("%d\n", count);
        count++;
    }
    return 0;
    }
