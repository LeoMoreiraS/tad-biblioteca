#include "..\headers\livro.h"
#include "..\headers\usuario.h"
#include "..\headers\emprestimo.h"
#include "..\headers\interface.h"

int main(){
    //testes
    
    //teste leitura e impressao usuario
    TBook book;
    TModuleBook mod1;
    startBook(&mod1);
    readBook(&book)?insertBook(&mod1,book):printf("Falha na insercao do livro\n");
    printAllBooks(mod1);

    int index = searchBook(mod1,book);
    if(index != -1) readBook(&book)?updateBook(&mod1,book,index):printf("Falha na leitura dos dados\n");
    else printf("Livro não foi encontrado\n");

    index = searchBook(mod1,book);
    if(index != -1) deleteBook(&mod1,index);
    else printf("Livro não foi encontrado\n");
    


    TUser user;
    TModuleUser mod2;
    startUser(&mod2);
    readUser(&user)?insertUser(&mod2,user):printf("Falha na insercao do usuario\n");
    printAllUsers(mod2);

    index = searchUser(mod2,user);
    if(index != -1) readUser(&user)?updateUser(&mod2,user,index):printf("Falha na leitura dos dados\n");
    else printf("Usuario não foi encontrado\n");

    index = searchUser(mod2,user);
    if(index != -1) deleteUser(&mod2,index);
    else printf("Usuario não foi encontrado\n");

    TBorrow borrow;
    TModuleBorrow mod3;
    startBorrow(&mod3);
    readBorrow(&borrow)?insertBorrow(&mod3,borrow):printf("Falha na insercao do emprestimo");
    printAllBorrows(mod3);

    index = searchBorrow(mod3,borrow);
    if(index != -1) readBorrow(&borrow)?updateBorrow(&mod3,borrow,index):printf("Falha na leitura dos dados\n");
    else printf("Emprestimo não foi encontrado\n");

    index = searchBorrow(mod3,borrow);
    if(index != -1) deleteBorrow(&mod3,index);
    else printf("Emprestimo não foi encontrado\n");
    /*
    //teste leitura e impressao livro
    
    //teste geracao da data de entrega
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
    //teste leitura e imprecao do emprestimo
   Borrow borrow;
   readBorrow(&borrow);
   printBorrow(borrow);
   
  //testes de valor de multa
   Date date1;
   Date date2;
   date1.day = 10;
    date1.month = 12;
    date1.year = 1999;
    date2.day = 16;
    date2.month = 11;
    date2.year = 2001;
    printf("%d\n",fineCalc(date1,date2));
    */
    return 0;
}