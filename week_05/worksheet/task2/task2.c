/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Elijah Luehrmann
 * ID: 201946447
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal: ");
	fgets(hex, 9, stdin);
	hex[strcspn(hex,"\n" )] = 0;
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	int len = strlen(hex);
	len -=1;
	printf("%d\n", len);
	double current_power = 0;
	for (int i = len; i >= 0; i--)
	{
		hex[i] = toupper(hex[i]);
		switch (hex[i])
		{
			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': 
				decimal += atof(&hex[i]) * pow(16, current_power);
				break;
			case 'A':
				decimal += 10 * pow(16, current_power);
				break;
			case 'B':
				decimal += 11 * pow(16, current_power);
				break;
			case 'C':
				decimal += 12 * pow(16, current_power);
				break;
			case 'D':
				decimal += 13 * pow(16, current_power);
				break;
			case 'E':
				decimal += 14 * pow(16, current_power);
				break;
			case 'F':
				decimal += 15 * pow(16, current_power);
				break;
			case ' ':
				break;
			default:
				printf("Error: Invalid Hexadecimal\n");
				return 1;
		}
		current_power+=1;
	}
	// print the decimal result
	printf("decimal: %ld\n", decimal);
	
	return 0;
}