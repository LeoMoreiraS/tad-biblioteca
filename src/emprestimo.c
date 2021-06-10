#include "..\headers\emprestimo.h"

void readBorrow(TBorrow *borrow){
    printf("Digite o cpf do usuario\n\t");
    fflush(stdin);
    fgets(borrow->cpf,16,stdin);
    printf("Digite o ISBN do livro\n\t");
    fflush(stdin);
    fgets(borrow->isbn,15,stdin);
    printf("Digite a data de emprestimo\n");
    readDate(&borrow->borrowDate);
    dateOfReturn(borrow->borrowDate,&borrow->returnDate);
    borrow->deliveryDate.day = 0;
    borrow->deliveryDate.month = 0;
    borrow->deliveryDate.year = 0;
}

void printBorrow(TBorrow borrow){
    printf("Cpf:\n\t%s",borrow.cpf);
    printf("ISBN:\n\t%s",borrow.isbn);
    printf("Data de emprestimo:\n\t");
    printDate(borrow.borrowDate);
    printf("Data de entrega:\n\t");
    printDate(borrow.returnDate);
    if(borrow.deliveryDate.year == 0){
        printf("O livro ainda nao foi devolvido\n");
    }else{
        printf("Data de devolucao:\n\t");
        printDate(borrow.deliveryDate);
    }

}