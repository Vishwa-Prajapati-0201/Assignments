// WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.

#include <stdio.h>

struct book
{
    char book_name[20];
    char author_name[20];
    int year_published;
    int price;
};

void main()
{
    struct book b1;

    printf("Enter the name of book: ");
    scanf("%s", &b1.book_name);

    printf("Enter the name of author: ");
    scanf("%s", &b1.author_name);
    
    printf("Enter the year book was published: ");
    scanf("%d", &b1.year_published);
    
    printf("Enter the price of the book: ");
    scanf("%d", &b1.price);

    printf("Name of the book is %s\n", b1.book_name);
    printf("Name of the author is %s\n", b1.author_name);
    printf("Book was published on %d\n", b1.year_published);
    printf("Price the book is %d\n", b1.price);
}