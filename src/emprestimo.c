#include "..\headers\emprestimo.h"

int readBorrow(TBorrow *borrow){
    //printf("Digite o cpf do usuario\n\t");
    //fflush(stdin);
    //fgets(borrow->cpf,16,stdin);
    //printf("Digite o ISBN do livro\n\t");
    //fflush(stdin);
    //fgets(borrow->isbn,15,stdin);
    printf("Digite a data de emprestimo\n");
    readDate(&borrow->borrowDate);
    dateOfReturn(borrow->borrowDate,&borrow->returnDate);
    borrow->deliveryDate.day = 0;
    borrow->deliveryDate.month = 0;
    borrow->deliveryDate.year = 0;
    return 1;
}

int printBorrow(TBorrow borrow){
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
        if(borrow.fine!=0)
        printf("Multa pendente:\n\tR$ %d.00\n",borrow.fine);
    }
    return 1;

}
int insertBorrow(TModuleBorrow *mod3, TBorrow borrow){
    if(mod3->index < 100){
        mod3->borrows[mod3->index] = borrow;
        printBorrow(mod3->borrows[mod3->index]);
        mod3->index++;
        printf("Emprestimo cadastrado com sucesso!\n");
        return 1;
    }else{
        printf("O armazenamento de emprestimos esta lotado!\n");
        return 0;
    }
}

int startBorrow(TModuleBorrow *mod3){
    mod3->index = 0;
    return 1;
}

int printAllBorrows(TModuleBorrow mod3){
    if(mod3.index==0){
        printf("Nenhum Emprestimo encontrado\n");
        return 0;
    }
    for(int i=0; i<mod3.index; i++){
        printBorrow(mod3.borrows[i]);
    }
    return 1;
}

int searchBorrow(TModuleBorrow mod3,TBorrow borrow){

    for(int i=0; i<mod3.index; i++){
        if(dateCmp(mod3.borrows[i].borrowDate, borrow.borrowDate)){
            if(strcmp(mod3.borrows[i].isbn, borrow.isbn)==0&&strcmp(mod3.borrows[i].cpf,borrow.cpf)==0){
                printf("Este emprestimo foi encontrado : \n");
                printBorrow(mod3.borrows[i]);
                return i;
            }
        }
    }
    return -1;
}

int updateBorrow(TModuleBorrow *mod3,TBorrow borrow,int index){
    mod3->borrows[index]=borrow;
    printf("Emprestimo alterado com sucesso\n");
    return 1;
}

int deleteBorrow(TModuleBorrow *mod3,int index){
    for (int i = index; i < mod3->index; i++){
        mod3->borrows[i] = mod3->borrows[i+1];
    }
    printf("Emprestimo deletado com sucesso\n");
    mod3->index--;
    return 1;
}


int returnBook(TModuleBorrow *mod3,TBorrow borrow,int index){
    int op;
    printf("Digite a data de hoje\n");
    readDate(&borrow.deliveryDate);
    
    borrow.fine = fineCalc(borrow.returnDate,borrow.deliveryDate);
    printDate(borrow.deliveryDate);
    printDate(borrow.returnDate);
    if(borrow.fine == 0){
        printf("Devolucao feita com sucesso\n");
        updateBorrow(mod3,borrow,index);
        return 1;
    }else{
        do{
            printf("A multa eh de R$ %d.00\nDigite 1 para efetivar o pagamento ou 0 para registrar a multa\n\t",borrow.fine);
            fflush(stdin);
            scanf("%d",&op);
            if(op==0){
                printf("Devolucao feita com sucesso e multa pendente salva no usuario\n");
                updateBorrow(mod3,borrow,index);
                return 0;
            }else if(op==1){
                printf("Devolucao feita com sucesso\n");
                borrow.fine= 0;
                updateBorrow(mod3,borrow,index);
                return 1;
            }else{
                printf("Opcao invalida\n");
            }
        }while(1);
    }

}

int payFine(TModuleBorrow *mod3,TBorrow borrow,int index){
    int pagamento = borrow.fine;
    borrow.fine=0;
    updateBorrow(mod3,borrow,index);
    printf("Multa paga com sucesso\n");
    return pagamento;
}