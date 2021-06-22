#include "..\headers\data.h"

void readDate(TDate *date){

    printf("\tDigite o dia\n\t");
    int toggle=0;
    do{
        if(toggle==1)printf("\tDigite um dia valido\n\t");
        fflush(stdin);
        scanf("%d",&date->day);
        toggle=1;
    }while(date->day<=0||date->day>=32);
    
    printf("\tDigite o numero do mes\n\t");
    toggle=0;
    do{
        if(toggle==1)printf("\tDigite um mes valido\n\t");
        fflush(stdin);
        scanf("%d",&date->month);
        toggle=1;
    }while(date->month<=0||date->month>=13);
    

    printf("\tDigite o ano\n\t");
    toggle=0;
    do{
        if(toggle==1)printf("\tDigite um ano valido no formato YYYY\n\t");
        fflush(stdin);
        scanf("%d",&date->year);
        toggle=1;
    }while(date->year<=999||date->year>=2050);
    

}
void printDate(TDate date){
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

void dateOfReturn(TDate borrowDate, TDate *returnDate){

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

int leapYearCalc(TDate date){
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

int fineCalc(TDate returnDate,TDate deliveryDate){
    int fine = 0;
    if(returnDate.year==deliveryDate.year){
        if(returnDate.month==deliveryDate.month){//mesmo ano e mes
            fine = 2*(deliveryDate.day - returnDate.day);
            if(fine>=0)return fine;
            else return 0;
        }else{//mesmo ano mes diferente
            if(returnDate.month<deliveryDate.month){
                int monthIterator = returnDate.month;
                int first = 0;
                while(monthIterator!=deliveryDate.month){
                    if(first==0){//primeira iteracao calcula os dias a partir do dia de entrega ate o final do mes
                        if(monthIterator == 1 || monthIterator == 3 || monthIterator == 5 || monthIterator == 7 || monthIterator == 8 || monthIterator == 10){//calcula multa meses 31 dias
                            fine += (31 - returnDate.day)*2;
                            monthIterator++;
                        }else if(monthIterator == 4 || monthIterator == 6 || monthIterator == 9 || monthIterator == 11){//calcula multa meses 30 dias
                            fine += (30 - returnDate.day)*2;
                            monthIterator++;
                        }else{//multa fevereiro
                            if(leapYearCalc(returnDate)){
                                fine += (29 - returnDate.day)*2;
                                monthIterator++;
                            }else{
                                fine += (29 - returnDate.day)*2;
                                monthIterator++;
                            }
                        }
                        first = 1;
                    }else{//o mes e diferente e nao esta no mesmo mes da data de entrega entao ele nao entregou o mes inteiro
                        if(monthIterator == 1 || monthIterator == 3 || monthIterator == 5 || monthIterator == 7 || monthIterator == 8 || monthIterator == 10){//calcula multa meses 31 dias
                            fine += (31)*2;
                            monthIterator++;
                        }else if(monthIterator == 4 || monthIterator == 6 || monthIterator == 9 || monthIterator == 11){//calcula multa meses 30 dias
                            fine += (30)*2;
                            monthIterator++;
                        }else{
                            if(leapYearCalc(returnDate)){
                                fine += (29)*2;
                                monthIterator++;
                            }else{
                                fine += (29)*2;
                                monthIterator++;
                            }
                        }
                    }
                }
                //meses iguais logo a multa desse mes é do dia 1 até o dia de devolucao
                fine += 2*deliveryDate.day; 
                return fine;
            }else{// o mes de entrega e menor que o de devolucao
                return 0;
            }
        }
    }else{//ano diferente
        //primeiro iterar somando os meses até igualar os anos
        
        if(returnDate.year>deliveryDate.year){//devolveu no ano anterior da data de entrega
            return 0;
        }else{
            int yearIterator = returnDate.year;
            int monthIterator = returnDate.month;
            int first = 0;
            while(yearIterator!=deliveryDate.year){//enquanto os anos forem diferentes   
                //primeira iteracao para pegar os dias antes da data de entrega
                if(first==0){
                    if(monthIterator==12){//multa dezembro vira ano
                        fine += (31 - returnDate.day)*2;
                        monthIterator = 1;
                        yearIterator++;
                    }else if(monthIterator == 1 || monthIterator == 3 || monthIterator == 5 || monthIterator == 7 || monthIterator == 8 || monthIterator == 10){//meses 31 dias
                        fine += (31 - returnDate.day)*2;
                        monthIterator++;
                    }else if(monthIterator == 4 || monthIterator == 6 || monthIterator == 9 || monthIterator == 11){//meses 30 dias
                        fine += (30 - returnDate.day)*2;
                        monthIterator++;
                    }else{//fevereiro
                            if(leapYearCalc(returnDate)){//ano bissexto
                                fine += (29 - returnDate.day)*2;
                                monthIterator++;
                            }else{
                                fine += (29 - returnDate.day)*2;
                                monthIterator++;
                            }
                    }
                }else{
                    if(monthIterator==12){//multa dezembro vira ano
                        fine += 31*2;
                        monthIterator = 1;
                        yearIterator++;
                    }else if(monthIterator == 1 || monthIterator == 3 || monthIterator == 5 || monthIterator == 7 || monthIterator == 8 || monthIterator == 10){//meses 31 dias
                        fine += 31*2;
                        monthIterator++;
                    }else if(monthIterator == 4 || monthIterator == 6 || monthIterator == 9 || monthIterator == 11){//meses 30 dias
                        fine += 30*2;
                        monthIterator++;
                    }else{//fevereiro
                            if(leapYearCalc(returnDate)){//ano bissexto
                                fine += 29*2;
                                monthIterator++;
                            }else{
                                fine += 28*2;
                                monthIterator++;
                            }
                    }

                }
            }
            //anos iguais agora iterar ate os meses ficarem iguais
            while(monthIterator!=deliveryDate.month){
                    //o mes e diferente e nao esta no mesmo mes da data de entrega entao ele nao entregou o mes inteiro
                        if(monthIterator == 1 || monthIterator == 3 || monthIterator == 5 || monthIterator == 7 || monthIterator == 8 || monthIterator == 10){//calcula multa meses 31 dias
                            fine += (31)*2;
                            monthIterator++;
                        }else if(monthIterator == 4 || monthIterator == 6 || monthIterator == 9 || monthIterator == 11){//calcula multa meses 30 dias
                            fine += (30)*2;
                            monthIterator++;
                        }else{
                            if(leapYearCalc(returnDate)){
                                fine += (29)*2;
                                monthIterator++;
                            }else{
                                fine += (29)*2;
                                monthIterator++;
                            }
                        }
                }
                //meses iguais logo a multa desse mes é do dia 1 até o dia de devolucao
                fine += 2*deliveryDate.day; 
            return fine;
        }
        
    }
}

int dateCmp(TDate date1,TDate date2){
    if(date1.year==date2.year&&date1.month==date2.month&&date1.day==date2.day){
        return 1;
    }
    return 0;
}