#include<stdio.h>

void printbin(int n)
{
    int countsetbits =0;
    int countclearbits =0;
    int mask;
    for(int i=31;i>=0;i--)
    {
        mask = 1<<i;
        if (n & mask)
        printf("1");
        else
        printf("0");
    }
    for(int i=31;i>=0;i--)
    {
        mask = 1<<i;
        if (n & mask)
        countsetbits++;
        else
        countclearbits++;
    }
        printf("\n number of set bits: %d\n", countsetbits);
        printf(" number of clear bits: %d\n", countclearbits);


    
}

void setbit(int n, int pos)
{
int mask = 1<<pos;
n = n | mask;
printbin(n);
}

int main()
{
    int a;
    int pos;
    printf("enter the integer: ");
    scanf("%d", &a);
    printbin(a);
    printf("\n enter the bit position to set (0-31): ");
    scanf("%d" , &pos);
    setbit(a, pos);
    return 0;
}