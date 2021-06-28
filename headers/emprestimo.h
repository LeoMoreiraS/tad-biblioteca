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
int ReadBorrow(TBorrow *borrow);

/* Imprime os dados de um emprestimo */
int PrintBorrow(TBorrow borrow);

/* Insere um emprestimo no modulo de emprestimos */
int InsertBorrow(TModuleBorrow *mod3, TBorrow borrow);

/* Inicializa o modulo de emprestimos */
int StartBorrow(TModuleBorrow *mod3);

/* Imprime todos os emprestimos do modulo */
int PrintAllBorrows(TModuleBorrow mod3);

/* Busca um modulo pela data caso tenha encontrado um usuario e livro */
int SearchBorrow(TModuleBorrow mod3,TBorrow borrow);

/* Atualiza os dados de um emprestimo no modulo de emprestimos*/
int UpdateBorrow(TModuleBorrow *mod3,TBorrow borrow,int index);

/* Exclui um emprestimo do modulo de emprestimos */
int DeleteBorrow(TModuleBorrow *mod3,int index);

/* Recebe um livro e calcula a multa dando a opção de pagar ou salvar a multa para pagamento posterior */
int ReturnBook(TModuleBorrow *mod3,TBorrow borrow,int index);

/*Realiza o pagamento de uma multa pendente */

int PayFine(TModuleBorrow *mod3,TBorrow borrow,int index);
#endif