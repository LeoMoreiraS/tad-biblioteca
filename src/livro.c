#include "..\headers\livro.h"

int restriction(TBook book){
    if(book.totalBooks*0.1 <= (book.totalBooks - book.borrowedBooks)) return 1;
    else return 0;
}

int readBook(TBook *book){
    
    printf("Digite o ISBN do livro\n\t");
    fflush(stdin);
    fgets(book->isbn,15,stdin);
    printf("Digite o titulo do livro\n\t");
    fflush(stdin);
    fgets(book->title,50,stdin);
    printf("Digite a editora do livro\n\t");
    fflush(stdin);
    fgets(book->publisher,50,stdin);
    printf("Digite o local de publicacao do livro\n\t");
    fflush(stdin);
    fgets(book->placePublish,50,stdin);
    printf("Digite a seguir a data de publicacao do livro\n");
    readDate(&(book->datePublish));
    printf("Digite o nome do primeiro autor do livro\n\t");
    fflush(stdin);
    fgets(book->firstAuthor,50,stdin);
    printf("Digite o nome do segundo autor do livro\n\t");
    fflush(stdin);
    fgets(book->secondAuthor,50,stdin);
    printf("Digite o numero da edicao do livro\n\t");
    fflush(stdin);
    scanf("%d",&book->editionNumber);
    printf("Digite o numero total de livros\n\t");
    fflush(stdin);
    scanf("%d",&book->totalBooks);
    book->borrowedBooks = 0;
    return 1;

};

int printBook(TBook book){
    printf("Titulo:\n\t%s",book.title);
    printf("ISBN\n\t%s",book.isbn);
    printf("Primeiro autor:\n\t%s",book.firstAuthor);
    printf("Segundo autor:\n\t%s",book.secondAuthor);
    printf("Dados da publicacao:\n");
    printf("\tEditora:\n\t\t%s",book.publisher);
    printf("\tData de publicacao:\n\t\t");
    printDate(book.datePublish);
    printf("\tLocal de publicacao:\n\t\t%s",book.placePublish);
    printf("Numero de livros existentes:\n\t%d\n",book.totalBooks);
    printf("Numero de livros emprestados:\n\t%d\n",book.borrowedBooks);
    if(restriction(book))printf("Esse livro esta disponivel para emprestimo\n");
    else printf("Esse livro nao esta disponivel para emprestimo\n");
    return 1;
 
}

int insertBook( TModuleBook *mod1, TBook book){
    if(mod1->index < 100){
        mod1->books[mod1->index] = book;
        printBook(mod1->books[mod1->index]);
        mod1->index++;
        printf("Livro cadastrado com sucesso!\n");
        return 1;
    }else{
        printf("O armazenamento de livros esta lotado!\n");
        return 0;
    }
}

int startBook(TModuleBook *mod1){
    mod1->index = 0;
    return 1;
}

int printAllBooks(TModuleBook mod1){

    for(int i=0; i<mod1.index; i++){
        printBook(mod1.books[i]);
    }
    return 1;
}

int searchBook(TModuleBook mod1,TBook book){
    for(int i=0; i<mod1.index; i++){
        printf("%d\n",strcmp(book.title,mod1.books[i].title));
        if(strcmp(book.title, mod1.books[i].title) == 0){
            printf("Este livro foi encontrado : \n");
            printBook(mod1.books[i]);
            return i;
        }
    }
    return -1;
}

int updateBook(TModuleBook *mod1,TBook book,int index){
    mod1->books[index]=book;
    printf("Livro alterado com sucesso\n");
    return 1;
}

int deleteBook(TModuleBook *mod1,int index){
    for (int i = index; i < mod1->index; i++){
        mod1->books[i] = mod1->books[i+1];
    }
    printf("Livro deletado com sucesso\n");
    mod1->index--;
    return 1;
}

