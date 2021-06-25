#ifndef INTERFACE_H
#define INTERFACE_H
#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "emprestimo.h"
#include "usuario.h"

/*Imprime o menu principal */
void menuText1();
/*imprime o menu do modulo dos livros */
void menuMod1();
/*imprime o menu do modulo de usuarios */
void menuMod2();
/*imprime o menu do modulo de emprestimos */
void menuMod3();

/*chama as funções do modulo de livros */
void moduleBook(TModuleBook *mod1,TBook book);
/*chama as funções do modulo de usuarios */
void moduleUser(TModuleUser *mod2,TUser user);
/*chama as funções do modulo de emprestimos */
void moduleBorrow(TModuleBorrow *mod3,TBorrow borrow,TModuleUser *mod2,TUser user,TModuleBook *mod1,TBook book);

#endif