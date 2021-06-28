#ifndef INTERFACE_H
#define INTERFACE_H
#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "emprestimo.h"
#include "usuario.h"

/*Imprime o menu principal */
void MenuText1();
/*imprime o menu do modulo dos livros */
void MenuMod1();
/*imprime o menu do modulo de usuarios */
void MenuMod2();
/*imprime o menu do modulo de emprestimos */
void MenuMod3();

/*chama as funções do modulo de livros */
void ModuleBook(TModuleBook *mod1,TBook book);
/*chama as funções do modulo de usuarios */
void ModuleUser(TModuleUser *mod2,TUser user);
/*chama as funções do modulo de emprestimos */
void ModuleBorrow(TModuleBorrow *mod3,TBorrow borrow,TModuleUser *mod2,TUser user,TModuleBook *mod1,TBook book);

#endif