
#ifndef LIVRO_H
#define LIVRO_H
#include <stdio.h>
#include <stdlib.h>
#include "data.h"



typedef struct book{
    char isbn[15];
    char title[50];
    char publisher[50];
    char placePublish[50];
    TDate datePublish;
    char firstAuthor[50];
    char secondAuthor[50];
    int editionNumber;
    int totalBooks;
    int borrowedBooks;
    int remainingBooks;
}TBook;

typedef struct library{
    TBook books[100];
    int index;
}TModuleBook;

int readBook(TBook *book);

int restriction(TBook book);

int printBook(TBook book);

int insertBook(TModuleBook *mod1, TBook book);

int startBook(TModuleBook *mod1);

int printAllBooks(TModuleBook mod1);

#endif 