#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    } date ;

    date a,b;
    a.date = 11;
    a.month = 11;
    a.year = 2004;

    b.date = 3;
    b.month = 9;
    b.year = 2002;

    bool flag = true;
    if(a.date!=b.date) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag==true) printf("the date are same");
    else printf("the dates are different");
    return 0;
}