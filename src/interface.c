#include "..\headers\interface.h"


void menuText1(){
    printf("\n\t<><><><><><><><><><><><><><><><><><><><>><><><><><><><><><><><><><");
    printf("\n\t<><><><><><><><>< 1 - sistema de livros <><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><>< 2 - sistema de usuario <><><><><><><><><><><><><");
    printf("\n\t<><><><><><><><> 3 - sistema de emprestimo <><><><><><><><><><><><");
    printf("\n\t<><><><><><><><><> 4 - sair do sistema  <><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><>><><><><><><><><><><><><><\n");
}

void moduleBook(TModuleBook *mod1,TBook book){
    system("cls");
    readBook(&book)?insertBook(mod1,book):printf("Falha na insercao do livro\n");
    printAllBooks(*mod1);

    int index = searchBook(*mod1,book);
    if(index != -1) readBook(&book)?updateBook(mod1,book,index):printf("Falha na leitura dos dados\n");
    else printf("Livro não foi encontrado\n");

    index = searchBook(*mod1,book);
    if(index != -1) deleteBook(mod1,index);
    else printf("Livro não foi encontrado\n");
    


}

void moduleUser(TModuleUser *mod2,TUser user){
    system("cls");
    readUser(&user)?insertUser(mod2,user):printf("Falha na insercao do usuario\n");
    printAllUsers(*mod2);

    int index = searchUser(*mod2,user);
    if(index != -1) readUser(&user)?updateUser(mod2,user,index):printf("Falha na leitura dos dados\n");
    else printf("Usuario não foi encontrado\n");

    index = searchUser(*mod2,user);
    if(index != -1) deleteUser(mod2,index);
    else printf("Usuario não foi encontrado\n");
}

void moduleBorrow(TModuleBorrow *mod3,TBorrow borrow){
    system("cls");
    readBorrow(&borrow)?insertBorrow(mod3,borrow):printf("Falha na insercao do emprestimo");
    printAllBorrows(*mod3);

    int index = searchBorrow(*mod3,borrow);
    if(index != -1) readBorrow(&borrow)?updateBorrow(mod3,borrow,index):printf("Falha na leitura dos dados\n");
    else printf("Emprestimo não foi encontrado\n");

    index = searchBorrow(*mod3,borrow);
    if(index != -1) deleteBorrow(mod3,index);
    else printf("Emprestimo não foi encontrado\n");
}