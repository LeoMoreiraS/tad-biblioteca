#ifndef DATA_H
#define DATA_H
#include <stdio.h>
#include <stdlib.h>



typedef struct date{
    int day;
    int month;
    int year;
}TDate;


void readDate(TDate *date);

void printDate(TDate date);

void dateOfReturn(TDate borrowDate, TDate *returnDate);

int leapYearCalc(TDate date);

int fineCalc(TDate returnDate,TDate deliveryDate);

#endif 