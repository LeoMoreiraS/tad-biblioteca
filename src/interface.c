#include <stdio.h>
#include <stdlib.h>
#include "..\headers\interface.h"


void MenuText1(){
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>         TAD BIBLIOTECA       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  1 - Livros                  <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  2 - Usuarios                <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  3 - Emprestimos             <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  0 - Sair do sistema         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t>>> ");
}

void MenuMod1(){
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>      SISTEMA DE LIVROS       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  1 - Imprimir Livros         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  2 - Pesquisar Livros        <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  3 - Cadastrar livro         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  4 - Alterar livro           <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  5 - Excluir livro           <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  0 - Sair do sistema         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t>>> ");
}
void MenuMod2(){
    
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>     SISTEMA DE USUARIOS      <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  1 - Imprimir usuarios       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  2 - Pesquisar usuarios      <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  3 - Cadastrar usuario       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  4 - Alterar usuario         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  5 - Excluir usuario         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  0 - Sair do sistema         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t>>> ");
}
void MenuMod3(){
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>    SISTEMA DE EMPRESTIMOS    <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  1 - Imprimir Emprestimos    <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  2 - Pesquisar Emprestimos   <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  3 - Fazer emprestimo        <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  4 - Alterar emprestimo      <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  5 - Excluir emprestimo      <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  6 - Finalizar emprestimo    <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  7 - Quitar imprestimo       <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><>  0 - Sair do sistema         <><><><><><><><><><>");
    printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t>>> ");
}


void ModuleBook(TModuleBook *mod1,TBook book){
    int op = 0;
    int index = 0;
    do{
        system("cls");
        MenuMod1();
        fflush(stdin);
        scanf("%d",&op);//leitura da opção
        switch (op){
        case 1://Impressão de todos os livros
            system("cls");
            PrintAllBooks(*mod1);
            system("pause");        
            break;
        case 2://Pesquisa de livro
            system("cls");
            printf("\n\tDigite o titulo do livro\n\t>>> ");
            fflush(stdin);
            fgets(book.title,50,stdin);
            index = SearchBook(*mod1,book);
            if(index != -1){
                system("cls");
                PrintBook(mod1->books[index]);
            }else{
                system("cls");
                printf("\n\tLivro nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 3:
            system("cls");//cadastro de livro
            ReadBook(&book)?InsertBook(mod1,book):printf("Falha na insercao do livro\n");
            system("pause");        
            break;
        case 4://Alterar livro
            system("cls");
            printf("\n\tDigite o titulo do livro\n\t>>> ");
            fflush(stdin);
            fgets(book.title,50,stdin);
            index = SearchBook(*mod1,book);
            if(index != -1){
                system("cls");
                book=mod1->books[index];
                if(book.borrowedBooks==0)
                    ReadBook(&book)?UpdateBook(mod1,book,index):printf("Falha na leitura dos dados\n");
                else
                    printf("Não pode alterar livros com emprestimos pendentes\n");
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
            index = SearchBook(*mod1,book);
            if(index != -1){
                book=mod1->books[index];
                 if(book.borrowedBooks==0)
                    ReadBook(&book)?UpdateBook(mod1,book,index):printf("Falha na leitura dos dados\n");
                else
                    printf("Não pode excluir livros com emprestimos pendentes\n");
                system("cls");
                DeleteBook(mod1,index);
            }else{
                system("cls");
                printf("\n\tLivro nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 0://voltar para o menu principal
            system("cls");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><>Voltando para o menu principal<><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t");
            system("pause");        
            break;
        default:
            system("cls");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><>        Opcao invalida        <><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t");
            system("pause");
            break;
        }
    }while(op!=0);
}

void ModuleUser(TModuleUser *mod2,TUser user){
    int op = 0;
    int index = 0;
    do{
        system("cls");
        MenuMod2();
        fflush(stdin);
        scanf("%d",&op);//leitura da opção
        switch (op){
        case 1://Impressão de todos os usuarios
            system("cls");
            PrintAllUsers(*mod2);
            system("pause");        
            break;
        case 2://Pesquisa de usuario
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            index = SearchUser(*mod2,user);
            if(index != -1){
                system("cls");
                PrintUser(mod2->users[index]);
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 3:
            system("cls");//cadastro de usuario
            ReadUser(&user)?InsertUser(mod2,user):printf("Falha na insercao do usuario\n");
            system("pause");        
            break;
        case 4://Alterar usuario
            system("cls");
             printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            index = SearchUser(*mod2,user);
            if(index != -1){
                system("cls");
                user = mod2->users[index];
                if(user.borrows!= 0){
                    printf("Não pode modificar usuario com emprestimo pendente\n");
                    break;
                }
               ReadUser(&user)?UpdateUser(mod2,user,index):printf("Falha na leitura dos dados\n");
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
            index = SearchUser(*mod2,user);
            if(index != -1){
                system("cls");
                system("cls");
                user = mod2->users[index];
                if(user.borrows!= 0){
                    printf("Não pode modificar usuario com emprestimo pendente\n");
                    break;
                }
                DeleteUser(mod2,index);
            }else{
                system("cls");
                printf("\n\tUsuario nao encontrado\n\t");
            }
            system("pause");        
            break;
        case 0://voltar para o menu principal
            system("cls");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><>Voltando para o menu principal<><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t");
            system("pause");        
            return;
            break;
        default:
            system("cls");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><>        Opcao invalida        <><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t");
            system("pause");
            break;
        }
    }while(op!=0);
}

void ModuleBorrow(TModuleBorrow *mod3,TBorrow borrow,TModuleUser *mod2,TUser user,TModuleBook *mod1,TBook book){
    int op = 0;
    int index = 0,indexBook,indexUser;
    do{
        system("cls");
        MenuMod3();
        fflush(stdin);
        scanf("%d",&op);//leitura da opção
        switch (op){
        case 1://Impressão de todos os emprestimos
            system("cls");
            PrintAllBorrows(*mod3);
            system("pause");        
            break;
        case 2://Pesquisa de emprestimmo
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            indexUser = SearchUser(*mod2,user);
            
            if(indexUser!=-1){
                user = mod2->users[indexUser];
                printf("\n\tDigite o titulo do livro\n\t>>> ");
                fflush(stdin);
                fgets(book.title,50,stdin);
                indexBook = SearchBook(*mod1,book);
                if(indexBook!=-1){
                    book = mod1->books[indexBook];
                    strcpy(borrow.cpf,user.cpf);
                    strcpy(borrow.isbn,book.isbn);
                    printf("\n\tDigite a data de emprestimo do livro\n ");
                    fflush(stdin);
                    ReadDate(&borrow.borrowDate);
                    index = SearchBorrow(*mod3,borrow);
                    if(index != -1){
                        system("cls");
                        printf("Este emprestimo foi encontrado :\n");
                        PrintBorrow(mod3->borrows[index]);
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
            indexUser = SearchUser(*mod2,user);
            if(indexUser!=-1){
                user = mod2->users[indexUser];
                if(CheckUser(user)){
                    
                    printf("\n\tDigite o titulo do livro\n\t>>> ");
                    fflush(stdin);
                    fgets(book.title,50,stdin);
                    indexBook = SearchBook(*mod1,book);
                    if(indexBook!=-1){
                        book = mod1->books[indexBook];
                        if(Restriction(book)){
                            strcpy(borrow.cpf,user.cpf);
                            strcpy(borrow.isbn,book.isbn);
                            if(ReadBorrow(&borrow)){
                                InsertBorrow(mod3,borrow);
                                book.borrowedBooks++;
                                UpdateBook(mod1,book,indexBook);
                                user.borrows++;
                                UpdateUser(mod2,user,indexUser);
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
                    printf("\n\tO usuario possui uma multa ou nao pode mais fazer emprestimos\n\t");
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
            fgets(user.cpf,16,stdin);
            indexUser = SearchUser(*mod2,user);
            
            if(indexUser!=-1){
                user = mod2->users[indexUser];
                printf("\n\tDigite o titulo do livro\n\t>>> ");
                fflush(stdin);
                fgets(book.title,50,stdin);
                indexBook = SearchBook(*mod1,book);
                if(indexBook!=-1){
                    book = mod1->books[indexBook];
                    strcpy(borrow.cpf,user.cpf);
                    strcpy(borrow.isbn,book.isbn);
                    printf("\n\tDigite a data de emprestimo do livro\n ");
                    fflush(stdin);
                    ReadDate(&borrow.borrowDate);
                    index = SearchBorrow(*mod3,borrow);
                    if(index != -1){
                        system("cls");
                        borrow = mod3->borrows[index];
                        if(borrow.deliveryDate.day!=0&&borrow.fine==0){
                            system("cls");
                            printf("Digite a data de emprestimo\n");
                            fflush(stdin);
                            ReadDate(&borrow.borrowDate);
                            printf("Digite a data de entrega\n");
                            fflush(stdin);
                            ReadDate(&borrow.returnDate);
                            fflush(stdin);
                            printf("Digite a data de devolução\n");
                            ReadDate(&borrow.deliveryDate);
                            UpdateBorrow(mod3,borrow,index);
                            
                        }else{
                            printf("Não pode fazer alteração antes de receber o livro ou a multa\n");
                        }
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
        case 5:
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            indexUser = SearchUser(*mod2,user);
            
            if(indexUser!=-1){
                user = mod2->users[indexUser];
                printf("\n\tDigite o titulo do livro\n\t>>> ");
                fflush(stdin);
                fgets(book.title,50,stdin);
                indexBook = SearchBook(*mod1,book);
                if(indexBook!=-1){
                    book = mod1->books[indexBook];
                    strcpy(borrow.cpf,user.cpf);
                    strcpy(borrow.isbn,book.isbn);
                    printf("\n\tDigite a data de emprestimo do livro\n ");
                    fflush(stdin);
                    ReadDate(&borrow.borrowDate);
                    index = SearchBorrow(*mod3,borrow);
                    if(index != -1){
                        borrow = mod3->borrows[index];
                        if(borrow.deliveryDate.day!=0&&borrow.fine==0){
                            system("cls");
                            DeleteBorrow(mod3,index);
                        }else{
                            printf("Não pode fazer exclusão antes de receber o livro ou a multa\n");
                        }
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
        case 6://devolucao de livro
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            indexUser = SearchUser(*mod2,user);
            
            if(indexUser!=-1){
                user = mod2->users[indexUser];
                printf("\n\tDigite o titulo do livro\n\t>>> ");
                fflush(stdin);
                fgets(book.title,50,stdin);
                indexBook = SearchBook(*mod1,book);
                if(indexBook!=-1){
                    book = mod1->books[indexBook];
                    strcpy(borrow.cpf,user.cpf);
                    strcpy(borrow.isbn,book.isbn);
                    printf("\n\tDigite a data de emprestimo do livro \n");
                    fflush(stdin);
                    ReadDate(&borrow.borrowDate);
                    index = SearchBorrow(*mod3,borrow);
                    if(index != -1){
                        system("cls");
                        borrow = mod3->borrows[index];
                        int state = ReturnBook(mod3,borrow,index);
                        if(state){
                            user.borrows--;
                            UpdateUser(mod2,user,indexUser);
                            book.borrowedBooks--;
                            UpdateBook(mod1,book,indexBook);
                        }else{
                            user.borrows--;
                            user.fine += mod3->borrows[index].fine;
                            UpdateUser(mod2,user,indexUser);
                            book.borrowedBooks--;
                            UpdateBook(mod1,book,indexBook);
                        }
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
        case 7://pagamento de multa
            system("cls");
            printf("\n\tDigite o cpf do usuario\n\t>>> ");
            fflush(stdin);
            fgets(user.cpf,16,stdin);
            indexUser = SearchUser(*mod2,user);
            
            if(indexUser!=-1){
                user = mod2->users[indexUser];
                printf("\n\tDigite o titulo do livro\n\t>>> ");
                fflush(stdin);
                fgets(book.title,50,stdin);
                indexBook = SearchBook(*mod1,book);
                if(indexBook!=-1){
                    book = mod1->books[indexBook];
                    strcpy(borrow.cpf,user.cpf);
                    strcpy(borrow.isbn,book.isbn);
                    printf("\n\tDigite a data de emprestimo do livro \n");
                    fflush(stdin);
                    ReadDate(&borrow.borrowDate);
                    index = SearchBorrow(*mod3,borrow);
                    if(index != -1){
                        borrow = mod3->borrows[index];
                        system("cls");
                        if(borrow.fine==0){
                            printf("Nenhuma multa para este emprestimo\n");
                        }else{
                            int fine = PayFine(mod3,borrow,index);
                            user.fine -= fine;
                            UpdateUser(mod2,user,indexUser);
                        }
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
        case 0://voltar para o menu principal
            system("cls");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><>Voltando para o menu principal<><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t");
            system("pause");        
            return;
            break;
        default:
            system("cls");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><>        Opcao invalida        <><><><><><><><><><>");
            printf("\n\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\t");
            system("pause"); 
            break;
        }
    }while(op!=0);
}