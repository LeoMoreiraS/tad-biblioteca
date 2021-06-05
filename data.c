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

void dateOfReturn(Date borrowDate, Date *returnDate){

    if(borrowDate.day<=14){
        returnDate->day = borrowDate.day+14;
        returnDate->month = borrowDate.month;
        returnDate->year = borrowDate.year;
        return;
    }else{
        if(borrowDate.month == 1 || borrowDate.month == 3 || borrowDate.month == 5 || borrowDate.month == 7 || borrowDate.month == 8 || borrowDate.month == 10){//calcula data mes com 31 dias
            if((borrowDate.day + 14) > 31){
                returnDate->day = (borrowDate.day + 14) - 31;
                returnDate->month = borrowDate.month + 1;
                returnDate->year = borrowDate.year;
                return;
            }else{
                returnDate->day = borrowDate.day+14;
                returnDate->month = borrowDate.month;
                returnDate->year = borrowDate.year;
                return;
            }
        }else if(borrowDate.month == 4 || borrowDate.month == 6 || borrowDate.month == 9 || borrowDate.month == 11){//calcula data meses com 30 dias
            if((borrowDate.day + 14) > 30){
                returnDate->day = (borrowDate.day + 14) - 30;
                returnDate->month = borrowDate.month + 1;
                returnDate->year = borrowDate.year;
                return;
            }else{
                returnDate->day = borrowDate.day+14;
                returnDate->month = borrowDate.month;
                returnDate->year = borrowDate.year;
                return;
            }
        }else if(borrowDate.month == 12){//calcula data dezembro
            if((borrowDate.day + 14) > 31){
                returnDate->day = (borrowDate.day + 14) - 31;
                returnDate->month = 1;
                returnDate->year = borrowDate.year + 1;
                return;
            }else{
                returnDate->day = borrowDate.day+14;
                returnDate->month = borrowDate.month;
                returnDate->year = borrowDate.year;
                return;
            }
        }else{//calcula data em fevereiro
            if(leapYearCalc(borrowDate)){
                if((borrowDate.day + 14) > 29){
                    returnDate->day = (borrowDate.day + 14) - 29;
                    returnDate->month = borrowDate.month + 1;
                    returnDate->year = borrowDate.year;
                    return;
                }else{
                    returnDate->day = borrowDate.day+14;
                    returnDate->month = borrowDate.month;
                    returnDate->year = borrowDate.year;
                    return;
                }
            }else{
                if((borrowDate.day + 14) > 28){
                    returnDate->day = (borrowDate.day + 14) - 28;
                    returnDate->month = borrowDate.month + 1;
                    returnDate->year = borrowDate.year;
                    return;
                }else{
                    returnDate->day = borrowDate.day+14;
                    returnDate->month = borrowDate.month;
                    returnDate->year = borrowDate.year;
                    return;
                }
            }
        }

    }
}

int leapYearCalc(Date date){
    if(date.year%4==0){
        if(date.year%100 == 0){
            if(date.year%400 == 0){
                return 1;//divisivel 400
            }else{
                return 0;//divisivel 100 mas nao 400
            }
        }else{
            return 1;//divisivel 4 mas nao 100
        }
    }else{
        return 0; //nao divisivel 4
    }
}