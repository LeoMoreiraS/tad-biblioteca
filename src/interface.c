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
        scanf("%d",&op);//leitura da opção
        switch (op){
        case 1://Impressão de todos os livros
            system("cls");
            printAllBooks(*mod1);
            system("pause");        
            break;
        case 2://Pesquisa de livro
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
            system("cls");//cadastro de livro
            readBook(&book)?insertBook(mod1,book):printf("Falha na insercao do livro\n");
            system("pause");        
            break;
        case 4://Alterar livro
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
            system("cls");//excluir livro
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
        case 6://voltar para o menu principal
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
    int op = 0;
    int index = 0;
    do{
        system("cls");
        menuMod2();
        fflush(stdin);
        scanf("%d",&op);//leitura da opção
        switch (op){
        case 1://Impressão de todos os usuarios
            system("cls");
            printAllUsers(*mod2);
            system("pause");        
            break;
        case 2://Pesquisa de usuario
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            index = searchUser(*mod2,user);
            if(index != -1){
                system("cls");
                printUser(mod2->users[index]);
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 3:
            system("cls");//cadastro de usuario
            readUser(&user)?insertUser(mod2,user):printf("Falha na insercao do usuario\n");
            system("pause");        
            break;
        case 4://Alterar livro
            system("cls");
             printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            index = searchUser(*mod2,user);
            if(index != -1){
                system("cls");
               readUser(&user)?updateUser(mod2,user,index):printf("Falha na leitura dos dados\n");
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 5:
            system("cls");
             printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            index = searchUser(*mod2,user);
            if(index != -1){
                system("cls");
                deleteUser(mod2,index);
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 6://voltar para o menu principal
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

void moduleBorrow(TModuleBorrow *mod3,TBorrow borrow,TModuleUser *mod2,TUser user,TModuleBook *mod1,TBook book){
    int op = 0;
    int index = 0,indexBook;
    do{
        system("cls");
        menuMod3();
        fflush(stdin);
        scanf("%d",&op);//leitura da opção
        switch (op){
        case 1://Impressão de todos os emprestimos
            system("cls");
            printAllBorrows(*mod3);
            system("pause");        
            break;
        case 2://Pesquisa de emprestimmo
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            index = searchUser(*mod2,user);
            
            if(index!=-1){
                user = mod2->users[index];
                printf("\n\tDigite o titulo do livro\n\t>>> ");
                fflush(stdin);
                fgets(book.title,50,stdin);
                indexBook = searchBook(*mod1,book);
                if(indexBook!=-1){
                    book = mod1->books[indexBook];
                    strcpy(borrow.cpf,user.cpf);
                    strcpy(borrow.isbn,book.isbn);
                    printf("\n\tDigite a data de emprestimo do livro ");
                    fflush(stdin);
                    readDate(&borrow.borrowDate);
                    index = searchBorrow(*mod3,borrow);
                    if(index != -1){
                        system("cls");
                        printf("Este emprestimo foi encontrado :\n");
                        printBorrow(mod3->borrows[index]);
                    }else{
                        system("cls");
                        printf("\n\tEmprestimo nao encontrado\n\t");
                    }
                }else{
                    system("cls");
                    printf("\n\tLivro nao encontrado\n\t");
                }
                
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }      
            system("pause");  
            break;
        case 3:
            system("cls");//cadastro de emprestimo

            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            index = searchUser(*mod2,user);
            if(index!=-1){
                user = mod2->users[index];
                if(checkUser(user)){
                    
                    printf("\n\tDigite o titulo do livro\n\t>>> ");
                    fflush(stdin);
                    fgets(book.title,50,stdin);
                    indexBook = searchBook(*mod1,book);
                    if(indexBook!=-1){
                        book = mod1->books[indexBook];
                        if(restriction(book)){
                            strcpy(borrow.cpf,user.cpf);
                            strcpy(borrow.isbn,book.isbn);
                            if(readBorrow(&borrow)){
                                insertBorrow(mod3,borrow);
                                book.borrowedBooks++;
                                updateBook(mod1,book,indexBook);
                                user.emprestimos++;
                                updateUser(mod2,user,index);
                            }else{
                                printf("Falha na insercao do emprestimo");
                            }
                        }else{
                            system("cls");
                            printf("\n\tLivro nao disponivel para emprestimo\n\t");
                        }
                        
                    }else{
                        system("cls");
                        printf("\n\tLivro nao encontrado\n\t");
                    }
                }else{
                    system("cls");
                    printf("\n\tO usuario possui uma multa ou não pode mais fazer emprestimos\n\t");
                }
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }
            
            system("pause");        
            break;
        case 4://Alterar emprestimo
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(borrow.cpf,16,stdin);
            index = searchBorrow(*mod3,borrow);
            if(index != -1){
                system("cls");
                 readBorrow(&borrow)?updateBorrow(mod3,borrow,index):printf("Falha na leitura dos dados\n");
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }   
            system("pause");        
            break;
        case 5:
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(borrow.cpf,16,stdin);
            index = searchBorrow(*mod3,borrow);
            if(index != -1){
                system("cls");
                deleteBorrow(mod3,index);
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 6://voltar para o menu principal
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