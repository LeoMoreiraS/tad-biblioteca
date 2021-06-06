
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
    Date datePublish;
    char firstAuthor[50];
    char secondAuthor[50];
    int editionNumber;
    int totalBooks;
    int borrowedBooks;
    int remainingBooks;
}Book;

void readBook(Book *book);

int restriction(Book book);

void printBook(Book book);
#endif 