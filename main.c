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

	printf("Enter number1:");
	fflush(stdout);
	scanf("%f",&number1);
	printf("\nEnter number2:");
	fflush(stdout);
	scanf("%f",&number2);
	printf("\nEnter number3:");
	fflush(stdout);
	scanf("%f",&number3);

	average = (number1+number2+number3)/3;

	printf("\nAverage is: %f\n",average);
}
