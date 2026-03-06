/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Izzy Shaw 
 * ID: 201956339
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int i;
	char letter;
	int conversion;
	int value;
	int k;
	int j;

	//Ask user for a input and read that input 
	printf("Enter a hexadecimal:");
	fgets(hex, sizeof(hex), stdin);

	//Loops through values in users input, converts all the letters to numbers
	for (i=0; hex[i] != '\n' && hex[i] != '\0'; i++) {
		switch (hex[i]){
			case 'a':
			case 'A':
				value = 10;
				break;
			case 'b':
			case 'B':
				value = 11;
				break;
			case 'c':
			case 'C':
				value = 12;
				break;
			case 'd':
			case 'D':
				value = 13;
				break;
			case'e':
			case 'E':
				value = 14;
				break;
			case'f':
			case 'F':
				value = 15;
				break;
			//If it is between 0-9 or it is one of the cases above it is accepted, otherwise an error message is displayed and the program stops
			default:
				if (hex[i] >=48 && hex[i] <= 57 ) {
					value = hex[i] - '0';
					break;
				}
				else {
					printf("Error: Invalid Hexadecimal\n");
					return(1);
				}
			}
	//Calculates the final hex value
	decimal = decimal * 16 + value;
			
		}
	

	
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}