#include<stdio.h>

float add(float a, float b)  //the function definition for addition
{
    float sum;
sum=a+b;               //copy of num1 + copy of num2
return sum;
}
float sub(float a,float b)  //the function definition for substraction
{float dif;
dif=a-b;                  //copy of num1 - copy of num2  
return dif; 
}
float mul(float a, float b)   //the function definition for multiplication
{float product;
product=a*b;             //copy of num1 * copy of num2
return product;     
}
float divd(float a,float b)   //the function definition for division
{
    float divi;
    if(b==0)
{
    printf("\nerror");
   
}
else
{

    divi=a/b;             //copy of num1 / copy of num2

return divi;
}
}
int main()
{
    float num1,num2;
float result;
char op;

printf("simple caculator\n");
printf("********************\n");

printf("Enter the first number : \n");
scanf("%f",&num1);

printf("Enter the operator +,-,*,/  \n");
scanf(" %c", &op);

printf("\nEnter the first number : ");
scanf("%f", &num2);

switch(op)                    //switch operation
{
    case '+':
    result = add(num1, num2);    //result = sum
    break;

    
    case '-':
    result = sub(num1, num2);     //result = sub
    break;

    
    case '*':
    result = mul(num1, num2);     //result = mul
    break;

    
    case '/':
    result = divd(num1, num2);    //result = div
    break;
    default:
    printf("invalid operator");
    break;
}


printf("\nResult is : %.2f", result);


return 0;
}