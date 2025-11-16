 #include <stdio.h>

int main()
{ 
    int a = 10;
    int *ptr = &a;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr2 = arr;
    char arr2[4] = {'A','B','C','D'};
    char *ptr3 = arr2;
    
    printf("address of a = %p", &a);
    printf("\naddress stored inside pointer ptr = %p", ptr);
    printf("\nvalue stored inside pointer ptr = %d", *ptr);
    printf("\naddress of a pointer ptr = %p", &ptr);
    printf("\nsize of a = %d", sizeof(a));
    printf("\nsize of pointer ptr = %d", sizeof(ptr));
    for (int i=0; i<10; i++)
    {
        printf("\nvalue of arr[%d] = %d and address = %p", i, *(ptr2+i), (ptr2+i));
    }

    printf("\narray 2");
    for (char i=0; i<4; i++)
    {
        printf("\nvalue of arr2[%d] = %c and address = %p", i, *(ptr3+i), (ptr3+i));
    }
    
    return 0;
}