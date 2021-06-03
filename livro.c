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
    int toogle1=0;
    do{
        if(toogle1==1)printf("\tDigite um dia valido\n\t");
        scanf("%d",&date->day);
        toogle1=1;
    }while(date->day<=0||date->day>=32);
    
    printf("\tDigite o numero do mes\n\t");
    int toogle2=0;
    do{
        if(toogle2==1)printf("\tDigite um mes valido\n\t");
        scanf("%d",&date->month);
        toogle2=1;
    }while(date->month<=0||date->month>=13);
    

    printf("\tDigite o ano\n\t");
    int toogle3=0;
    do{
        if(toogle3==1)printf("\tDigite um ano valido no formato YYYY\n\t");
        scanf("%d",&date->year);
        toogle3=1;
    }while(date->year<=999||date->year>=2050);
    

}
void printDate(Date date){
    if(date.day>=10 && date.month>=10){
        printf("%d/%d/%d\n",date.day,date.month,date.year);
    }else if(date.day<10&&date.month<10){
        printf("0%d/0%d/%d\n",date.day,date.month,date.year);
    }else if(date.day<10&&date.month>=10){
        printf("0%d/%d/%d\n",date.day,date.month,date.year);
    }else{
        printf("%d/0%d/%d\n",date.day,date.month,date.year);
    }
}

void readBook(Book *book){
    
    printf("Digite o ISBN do livro\n\t");
    fflush(stdin);
    fgets(book->code,15,stdin);
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
    printf("Digite o numero de livros emprestados\n\t");
    scanf("%d",&book->borrowedBooks);


};

void printBook(Book book){
    printf("Titulo:\n\t%s",book.title);
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

int main(){
    Book book;
    readBook(&book);
    printBook(book);
    
    return 0;
}