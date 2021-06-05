#ifndef DATA_H
#define DATA_H
#include <stdio.h>
#include <stdlib.h>



typedef struct date{
    int day;
    int month;
    int year;
}Date;


void readDate(Date *date);

void printDate(Date date);

void dateOfReturn(Date borrowDate, Date *returnDate);

int leapYearCalc(Date date);

#endif 