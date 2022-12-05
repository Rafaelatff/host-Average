/*
 * main.c
 *
 *  Created on: 5 de dez de 2022
 *      Author: r.freitas
 */
#include <stdio.h>

int main (void){
	float number1, number2, number3;
	float average;

	printf("Enter 3 numbers:");
	fflush(stdout);
	scanf("%f %f %f",&number1,&number2,&number3);


	average = (number1+number2+number3)/3;

	printf("\nAverage is: %f\n",average);
}
