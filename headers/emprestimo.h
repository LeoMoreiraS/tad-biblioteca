#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H
#include <stdio.h>
#include <stdlib.h>
#include "data.h"
typedef struct borrow{
    char cpf[16];
    char isbn[15];
    Date borrowDate;
    Date returnDate;
    Date deliveryDate;
}Borrow;

void readBorrow(Borrow *borrow);

void printBorrow(Borrow borrow);

#endif