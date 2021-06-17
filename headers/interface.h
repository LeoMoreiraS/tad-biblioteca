#ifndef INTERFACE_H
#define INTERFACE_H
#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "emprestimo.h"
#include "usuario.h"


void menuText1();

void moduleBook(TModuleBook *mod1,TBook book);
void moduleUser(TModuleUser *mod2,TUser user);
void moduleBorrow(TModuleBorrow *mod3,TBorrow borrow);

#endif