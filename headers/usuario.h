
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
    
}Address;


typedef struct user{
    char cpf[15];
    char name[25];
    char lastName[50];
    char rg[15];
    Address address;
    Date birthDate;
    int userType;
    char courseDep[50];
}User;


void readUser(User *user);
void printUser(User user);
#endif 