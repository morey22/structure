#include <stdio.h>
#include <string.h>
int main(){
    typedef struct book{
        int noofpage;
        float price;
        char name;
    } Book;
    
    Book a;
    Book b;
    Book c;
    
    a.noofpage = 100;
    a.price = 100.5;
    strcpy(a.name,"Secret Seven");

    b.noofpage = 100;
    b.price = 100.5;
    strcpy(b.name,"Famous Five");

    c.noofpage = 100;
    c.price = 100.5;
    strcpy(c.name,"poor dad");

    printf("%d\n", a.noofpage);
    printf("%d\n", a.price);
    printf("%d\n", a.name);

    return 0;
}