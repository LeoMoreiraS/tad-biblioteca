
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

int readUser(TUser *user);
int printUser(TUser user);
int insertUser(TModuleUser *mod2,TUser user);
int startUser(TModuleUser *mod2);
int printAllUsers(TModuleUser mod2);
int searchUser(TModuleUser mod2,TUser user);
int updateUser(TModuleUser *mod2,TUser user,int index);
int deleteUser(TModuleUser *mod2,int index);
int checkUser(TUser user);
#endif 