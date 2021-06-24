#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"
typedef struct borrow{
    char cpf[16];
    char isbn[15];
    TDate borrowDate;
    TDate returnDate;
    TDate deliveryDate;
    int fine;
}TBorrow;

typedef struct borrows{
    TBorrow borrows[100];
    int index;
}TModuleBorrow;

int readBorrow(TBorrow *borrow);

int printBorrow(TBorrow borrow);

int insertBorrow(TModuleBorrow *mod3, TBorrow borrow);

int startBorrow(TModuleBorrow *mod3);

int printAllBorrows(TModuleBorrow mod3);

int searchBorrow(TModuleBorrow mod3,TBorrow borrow);

int updateBorrow(TModuleBorrow *mod3,TBorrow borrow,int index);

int deleteBorrow(TModuleBorrow *mod3,int index);

int returnBook(TModuleBorrow *mod3,TBorrow borrow,int index);

int payFine(TModuleBorrow *mod3,TBorrow borrow,int index);
#endif