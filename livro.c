#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int day;
    int month;
    int year;
}Date;

typedef struct book{
    char code[15];
    char title[50];
    char publisher[50];
    char placePublish[50];
    Date datePublish;
    char firstAuthor[50];
    char secondAuthor[50];
    int editionNumber;
    int totalBooks;
    int borrowedBooks;
    int remainingBooks;
}Book;

int restriction(Book book){
    if(book.totalBooks*0.1 <= (book.totalBooks - book.borrowedBooks)) return 1;
    else return 0;
}

void readDate(Date *date){
    
    printf("\tDigite o dia\n\t");
    scanf("%d",&date->day);
    printf("\tDigite o mes\n\t");
    scanf("%d",&date->month);
    printf("\tDigite o ano\n\t");
    scanf("%d",&date->year);

}

void readBook(Book *book){
    
    printf("Digite o codigo do livro\n");
    fflush(stdin);
    fgets(book->code,15,stdin);
    printf("Digite o titulo do livro\n");
    fflush(stdin);
    fgets(book->title,50,stdin);
    printf("Digite a editora do livro\n");
    fflush(stdin);
    fgets(book->publisher,50,stdin);
    printf("Digite o local de publicacao do livro\n");
    fflush(stdin);
    fgets(book->placePublish,50,stdin);
    printf("Digite a seguir a data de publicacao do livro\n");
    readDate(&(book->datePublish));
    printf("Digite o nome do primeiro autor do livro\n");
    fflush(stdin);
    fgets(book->firstAuthor,50,stdin);
    printf("Digite o nome do segundo autor do livro\n");
    fflush(stdin);
    fgets(book->secondAuthor,50,stdin);
    printf("Digite o numero da edicao do livro\n");
    scanf("%d",&book->editionNumber);
    printf("Digite o numero total de livros\n");
    scanf("%d",&book->totalBooks);
    printf("Digite o numero de livros emprestados\n");
    scanf("%d",&book->borrowedBooks);


};

void printBook(Book book){
    printf("%s%d/%d/%d\n",book.title,book.datePublish.day,book.datePublish.month,book.datePublish.year);
}

int main(){
    Book book;
    readBook(&book);
    printBook(book);
    
    printf("%d\n",restriction(book));
    
    return 0;
}