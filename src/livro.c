#include "..\headers\livro.h"

int restriction(Book book){
    if(book.totalBooks*0.1 <= (book.totalBooks - book.borrowedBooks)) return 1;
    else return 0;
}

void readBook(Book *book){
    
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
    scanf("%d",&book->editionNumber);
    printf("Digite o numero total de livros\n\t");
    scanf("%d",&book->totalBooks);
    book->borrowedBooks = 0;


};

void printBook(Book book){
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
 
}

