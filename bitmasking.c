#include<stdio.h>

void printbin(int n)
{
    int mask;
    for(int i=31;i>=0;i--)
    {
        mask= 1<<i;
        if(n & mask)
        printf("1");
        else
        printf("0");
    }
}
void setbit(int n, int pos)
{
    int mask=1<<pos;
    n = n | mask;
    printbin(n);
}
void clearbit(int n, int pos)
{
    int mask = ~(1<<pos);
    n= n & mask;
    printbin(n);
}
void togglebit(int n,int pos)
{
    int mask= 1<<pos;
    n = n ^ mask;
    printbin(n);
}

int main()
{
    int a;
    int pos;
    printf("enter an integer: ");
    scanf("%d", &a);
    printbin(a);
    printf("\n enter the bit position to set (0-31): ");
    scanf("%d", &pos);
    setbit(a,pos);
    printf("\n enter the bit position to clear (0-31):");
    scanf("%d", &pos);
    clearbit(a,pos);
    printf("\n enter the bit position to toggle (0-31) : ");
    scanf("%d", &pos);
    togglebit(a, pos);
    return 0;
}