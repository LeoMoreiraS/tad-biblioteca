
#ifndef USUARIO_H
#define USUARIO_H
#include <stdio.h>
#include <stdlib.h>
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
}TUser;

typedef struct users{
    TUser users[100];
    int index;
}TModuleUser;

void readUser(TUser *user);
void printUser(TUser user);
#endif 