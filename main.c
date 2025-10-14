/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int add(int a,int b)
{
    int sum;
sum=a+b;
return sum;
}

int main()
{
    int num1,num2;
    int result;
    printf("enter your first number : ");
    scanf("%d", &num1);
    printf("enter your second number : ");
    scanf("%d",&num2);
 //   int sum=num1+num2;
 result = add(num1, num2);
    printf("output is %d", result);
    
    

    return 0;
}