#include<stdio.h>

int add(int a, int b)
{
    int sum;
sum=a + b;
return sum;
}
int sub(int a, int b)
{int dif;
dif=a - b;
return dif;
}
int mul(int a, int b)
{int product;
product=a*b;
return product;
}
int div(int a,int b)
{int divi;
divi=a/b;
return divi;
}
int main()
{
    int num1,num2;
int result;

printf("enter the first number : ");
scanf("%d",&num1);

printf("\nenter the first number : ");
scanf("%d", &num2);

result = add(num1, num2);
printf("\noutput is : %d\n", result );

return 0;
}