#ifndef DATA_H
#define DATA_H
#include <stdio.h>
#include <stdlib.h>



typedef struct date{
    int day;
    int month;
    int year;
}TDate;

/* Lê os dados de uma data: ano, mês e dia aplicando restrições para datas validas */
void ReadDate(TDate *date);

/* Imprime uma data no formato DD/MM/YYYY */
void PrintDate(TDate date);

/*Calcula a data de entrega de um livro +14 dias a partir da data de emprestimo considerando meses com 30, 31 e 28 ou 29 dias*/
void DateOfReturn(TDate borrowDate, TDate *returnDate);

/*Calcula se um ano e bissexto */
int LeapYearCalc(TDate date);

/*Calcula o valor de multa ou se não há multa considerando meses com 30, 31 e 28 ou 29 dias*/
int FineCalc(TDate returnDate,TDate deliveryDate);

/*Compara duas datas e retorna verdadeiro caso elas sejam iguais */
int DateCmp(TDate date1,TDate date2);
#endif 