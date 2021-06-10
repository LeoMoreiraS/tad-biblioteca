#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H
#include <stdio.h>
#include <stdlib.h>
#include "data.h"
typedef struct borrow{
    char cpf[16];
    char isbn[15];
    TDate borrowDate;
    TDate returnDate;
    TDate deliveryDate;
}TBorrow;

typedef struct borrows{
    TBorrow borrows[100];
    int index;
}TModuleBorrow;

void readBorrow(TBorrow *borrow);

void printBorrow(TBorrow borrow);

#endif