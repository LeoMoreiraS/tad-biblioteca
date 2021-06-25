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

/* Lê os dados do emprestimo basicamente a data de emprestimo pois os outros dados são recebidos por pesquisa */
int readBorrow(TBorrow *borrow);

/* Imprime os dados de um emprestimo */
int printBorrow(TBorrow borrow);

/* Insere um emprestimo no modulo de emprestimos */
int insertBorrow(TModuleBorrow *mod3, TBorrow borrow);

/* Inicializa o modulo de emprestimos */
int startBorrow(TModuleBorrow *mod3);

/* Imprime todos os emprestimos do modulo */
int printAllBorrows(TModuleBorrow mod3);

/* Busca um modulo pela data caso tenha encontrado um usuario e livro */
int searchBorrow(TModuleBorrow mod3,TBorrow borrow);

/* Atualiza os dados de um emprestimo no modulo de emprestimos*/
int updateBorrow(TModuleBorrow *mod3,TBorrow borrow,int index);

/* Exclui um emprestimo do modulo de emprestimos */
int deleteBorrow(TModuleBorrow *mod3,int index);

/* Recebe um livro e calcula a multa dando a opção de pagar ou salvar a multa para pagamento posterior */
int returnBook(TModuleBorrow *mod3,TBorrow borrow,int index);

/*Realiza o pagamento de uma multa pendente */

int payFine(TModuleBorrow *mod3,TBorrow borrow,int index);
#endif