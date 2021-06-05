#include "data.h"

void readDate(Date *date){

    printf("\tDigite o dia\n\t");
    int toggle=0;
    do{
        if(toggle==1)printf("\tDigite um dia valido\n\t");
        scanf("%d",&date->day);
        toggle=1;
    }while(date->day<=0||date->day>=32);
    
    printf("\tDigite o numero do mes\n\t");
    toggle=0;
    do{
        if(toggle==1)printf("\tDigite um mes valido\n\t");
        scanf("%d",&date->month);
        toggle=1;
    }while(date->month<=0||date->month>=13);
    

    printf("\tDigite o ano\n\t");
    toggle=0;
    do{
        if(toggle==1)printf("\tDigite um ano valido no formato YYYY\n\t");
        scanf("%d",&date->year);
        toggle=1;
    }while(date->year<=999||date->year>=2050);
    

}
void printDate(Date date){
    if(date.day>=10 && date.month>=10){
        printf("%d/%d/%d\n",date.day,date.month,date.year);
    }else if(date.day<10&&date.month<10){
        printf("0%d/0%d/%d\n",date.day,date.month,date.year);
    }else if(date.day<10&&date.month>=10){
        printf("0%d/%d/%d\n",date.day,date.month,date.year);
    }else{
        printf("%d/0%d/%d\n",date.day,date.month,date.year);
    }
}

