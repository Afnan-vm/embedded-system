#include <stdio.h>

char a;
int b;
float c;
double d;

#pragma pack(1)
typedef struct 
{
    int rollno : 2;
    char name[50];
    float marks;
}person;
int main()
{
    person p1={11,"afnan",90.5};
    printf("roll.no - %d, name - %s, marks - %.2f", p1.rollno, p1.name, p1.marks);
    printf("\n size of the structure is %d", sizeof(person));
    printf("\n size of a is %d", sizeof(a));
    printf("\n size of b is %d", sizeof(b));
    printf("\n size of c is %d", sizeof(c));
    printf("\n size of d is %d", sizeof(d));
    
    return 0;
}
