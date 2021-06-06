#include "..\headers\livro.h"
#include "..\headers\usuario.h"
#include "..\headers\emprestimo.h"
#include "..\headers\interface.h"

int main(){
    //testes
    /*Book book;
    readBook(&book);
    printBook(book);
    User user;
    readUser(&user);
    printUser(user);
    Date date;
    Date date2;
    date.day = 14;
    date.month = 2;
    date.year = 2000;
    dateOfReturn(date,&date2);
    printDate(date);
    printDate(date2);
    date.day = 18;
    date.month = 12;
    date.year = 2000;
    dateOfReturn(date,&date2);
    printDate(date);
    printDate(date2);
    date.day = 15;
    date.month = 2;
    date.year = 2000;
    dateOfReturn(date,&date2);
    printDate(date);
    printDate(date2);
    date.day = 15;
    date.month = 2;
    date.year = 1999;
    dateOfReturn(date,&date2);
    printDate(date);
    printDate(date2);
    date.day = 13;
    date.month = 11;
    date.year = 2000;
    dateOfReturn(date,&date2);
    printDate(date);
    printDate(date2);
    */
   Borrow borrow;
   readBorrow(&borrow);
   printBorrow(borrow);

    return 0;
}