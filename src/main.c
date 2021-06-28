#include <stdio.h>
#include <stdlib.h>
#include "..\headers\interface.h"
int main(){
    TBook book;
    TModuleBook mod1;
    StartBook(&mod1);
    TUser user;
    TModuleUser mod2;
    StartUser(&mod2);
    TBorrow borrow;
    TModuleBorrow mod3;
    StartBorrow(&mod3);

    int op;
    do{
        system("cls");
        MenuText1();
        fflush(stdin);
        scanf("%d",&op);        
        switch (op){
        case 1:
            ModuleBook(&mod1,book);
            break;

        case 2:
            ModuleUser(&mod2,user);
            break;

        case 3:
            ModuleBorrow(&mod3,borrow,&mod2,user,&mod1,book);
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