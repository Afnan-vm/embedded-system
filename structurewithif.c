#include <stdio.h>

typedef struct
{
    char title[60];
    char author[60];
    int price;
}
books;

int main()
{
    books b1 = {"To Kill a Mockingbird", "Harper Lee", 450 };
    printf("book 1 : title-%s, author-%s, price-%d", b1.title, b1.author, b1.price );
    books b2 = {"Pride and Prejudice", "Jane Austen", 189 };
    printf("\nbook 2 : title-%s, author-%s, price-%d", b2.title, b2.author, b2.price );
    books b3 = {"Pride and Prejudice (Keepsake Edition)", "Jane Austen", 1399 };
    printf("\nbook 3 : title-%s, author-%s, price-%d", b3.title, b3.author, b3.price );
    
if(b1.price>b2.price,b1.price>b3.price)

    {
    printf("\nTo Kill a Mockingbird book is expensive");
    }
    else if(b2.price>b1.price,b2.price>b3.price)
    {
        printf("\nPride and Prejudice book is expensive");
    }
    else (b3.price>b1.price,b3.price>b2.price);
    {
        printf("\nPride and Prejudice (Keepsake Edition) book is expensive");
    }
    return 0;
}