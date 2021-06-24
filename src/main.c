#include "..\headers\interface.h"

int main(){
    //testes
    TBook book;
    TModuleBook mod1;
    startBook(&mod1);
    TUser user;
    TModuleUser mod2;
    startUser(&mod2);
    TBorrow borrow;
    TModuleBorrow mod3;
    startBorrow(&mod3);

    int op;
    do{
        system("cls");
        menuText1();
        fflush(stdin);
        scanf("%d",&op);        
        switch (op){
        case 1:
            moduleBook(&mod1,book);
            break;

        case 2:
            moduleUser(&mod2,user);
            break;

        case 3:
            moduleBorrow(&mod3,borrow,&mod2,user,&mod1,book);
            break;
        case 0:
            system("cls");
            printf("\n\t<><><><><><><><><><> Saindo do sistema <><><><><><><><><><>\n");
            break;

        default:
            break;
        }  
    } while (op != 0);
    

    return 0;
}