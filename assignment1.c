#include <stdio.h>

void printsecondlargest(int arr[], int n)
{
    int first, second;
    first = second = -2147483648; // Initialize to minimum integer value

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if(second == -2147483648)
    {
        printf("There is no second largest element.\n");
    }
    else
    {
        printf("The second largest element is: %d\n", second);
    }
}
int main()
{
    int arr[10];
    printf("enter 10 integers:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
    printsecondlargest(arr, 10);
    
    return 0;
}