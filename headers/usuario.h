
#ifndef USUARIO_H
#define USUARIO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"



typedef struct address{
    char address[100];
    int number;
    char bairro[50];
    char city[50];
    char cep[15];
    
}TAddress;


typedef struct user{
    char cpf[16];
    char name[25];
    char lastName[50];
    char rg[15];
    TAddress address;
    TDate birthDate;
    int userType;
    char courseDep[50];
    int fine;
    int borrows;
}TUser;

typedef struct users{
    TUser users[100];
    int index;
}TModuleUser;

/* Faz a leitura dos dados para cadastro ou alteração dos dados do usuario*/
int ReadUser(TUser *user);

/* Função para imprimir os dados dos usuarios */
int PrintUser(TUser user);

/* Função para inserir um livro no modulo de usuario */
int InsertUser(TModuleUser *mod2,TUser user);

/* Função para inicializar o modulo de usuario */
int StartUser(TModuleUser *mod2);

/* Função para imprimir todos os usuarios cadastrados */

int PrintAllUsers(TModuleUser mod2);

/* Função para buscar um usuario pelo cpf */
int SearchUser(TModuleUser mod2,TUser user);

/* função para atualiza um usuario no sistema de usuarios */
int UpdateUser(TModuleUser *mod2,TUser user,int index);

/*função para excluir um usuario do sistema de usuarios */
int DeleteUser(TModuleUser *mod2,int index);

/*Função para checar o usuario está apto para fazer um emprestimo */
int CheckUser(TUser user);
#endif 