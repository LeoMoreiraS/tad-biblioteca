
#ifndef LIVRO_H
#define LIVRO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

/* Faz a leitura dos dados para cadastro ou alteração dos dados do livro*/
int readBook(TBook *book);

/* Restrição do numero de livros 10% */
int restriction(TBook book);

/* Função para imprimir os dados do livro */
int printBook(TBook book);

/* Função para inserir um livro no modulo de livros */
int insertBook(TModuleBook *mod1, TBook book);

/* Função para inicializar o modulo de livros */
int startBook(TModuleBook *mod1);

/* Função para imprimir todos os livros cadastrados */
int printAllBooks(TModuleBook mod1);

/* Função para buscar um livro pelo titulo */
int searchBook(TModuleBook mod1,TBook book);

/* Função para atualizar um livro no modulo recebendo os dados e o indice do livro */
int updateBook(TModuleBook *mod1,TBook book,int index);

/* Função para excluir um livro no modulo de livros */
int deleteBook(TModuleBook *mod1,int index);

#endif 