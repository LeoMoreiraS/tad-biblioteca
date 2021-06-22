#ifndef INTERFACE_H
#define INTERFACE_H
#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "emprestimo.h"
#include "usuario.h"


void menuText1();
void menuMod1();
void menuMod2();
void menuMod3();


void moduleBook(TModuleBook *mod1,TBook book);
void moduleUser(TModuleUser *mod2,TUser user);
void moduleBorrow(TModuleBorrow *mod3,TBorrow borrow,TModuleUser *mod2,TUser user,TModuleBook *mod1,TBook book);

#endif