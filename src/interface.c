#include "..\headers\interface.h"


void menuText1(){
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>         TAD BIBLIOTECA       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  1 - Livros                  <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  2 - Usuarios                <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  3 - Emprestimos             <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  4 - Sair do sistema         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t>>> ");
}

void menuMod1(){
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>      SISTEMA DE LIVROS       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  1 - Imprimir Livros         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  2 - Pesquisar Livros        <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  3 - Cadastrar livro         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  4 - Alterar livro           <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  5 - Excluir livro           <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  6 - Sair do sistema         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t>>> ");
}
void menuMod2(){
    
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>     SISTEMA DE USUARIOS      <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  1 - Imprimir usuarios       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  2 - Pesquisar usuarios      <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  3 - Cadastrar usuario       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  4 - Alterar usuario         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  5 - Excluir usuario         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  6 - Sair do sistema         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t>>> ");
}
void menuMod3(){
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>    SISTEMA DE EMPRESTIMOS    <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  1 - Imprimir Emprestimos    <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  2 - Pesquisar Emprestimos   <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  3 - Fazer emprestimo        <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  4 - Alterar emprestimo      <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  5 - Excluir emprestimo      <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  6 - Sair do sistema         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t>>> ");
}


void moduleBook(TModuleBook *mod1,TBook book){
    int op = 0;
    int index = 0;
    do{
        system("cls");
        menuMod1();
        fflush(stdin);
        scanf("%d",&op);
        switch (op){
        case 1:
            system("cls");
            printAllBooks(*mod1);
            system("pause");        
            break;
        case 2:
            system("cls");
            printf("\n\tDigite o titulo do livro\n\t>>> ");
            fflush(stdin);
            fgets(book.title,50,stdin);
            index = searchBook(*mod1,book);
            if(index != -1){
                system("cls");
                printBook(mod1->books[index]);
            }else{
                system("cls");
                printf("\n\tLivro nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 3:
            system("cls");
            readBook(&book)?insertBook(mod1,book):printf("Falha na insercao do livro\n");
            system("pause");        
            break;
        case 4:
            system("cls");
            
            printf("\n\tDigite o titulo do livro\n\t>>> ");
            fflush(stdin);
            fgets(book.title,50,stdin);
            index = searchBook(*mod1,book);
            if(index != -1){
                system("cls");
                readBook(&book)?updateBook(mod1,book,index):printf("Falha na leitura dos dados\n");
            }else{
                system("cls");
                printf("\n\tLivro nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 5:
            system("cls");
            printf("\n\tDigite o titulo do livro\n\t>>> ");
            fflush(stdin);
            fgets(book.title,50,stdin);
            index = searchBook(*mod1,book);
            if(index != -1){
                system("cls");
                deleteBook(mod1,index);
            }else{
                system("cls");
                printf("\n\tLivro nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 6:
            system("cls");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><>Voltando para o menu principal<><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t");
            system("pause");        
            return;
            break;
        default:

            break;
        }
    }while(op!=6);
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