#include <stdio.h>

typedef struct
{ 
 char name[50];
 int age;
 char place[80];
 }
 student;

 

int main()
{
    student s1 = {"Afnan", 24 ,"Chelannur"};
     printf("student 1 : name-%s, age-%d, place-%s",s1.name, s1.age, s1.place);
    student s2 = {"Nikhil", 25 ,"calicut"};
    printf("\nstudent 1 : name-%s, age-%d, place-%s",s2.name, s2.age, s2.place);
    student s3 = {"rahul", 24 ,"palakkad"};
    printf("\nstudent 1 : name-%s, age-%d, place-%s",s3.name, s3.age, s3.place);
   
    

    return 0;
}