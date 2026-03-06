/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:
 * ID: 
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

	
	printf("Enter a hexadecimal:");
	fgets(hex, sizeof(hex), stdin);

	for (i=0; hex[i] != '\n' && hex[i] != '\0'; i++) {
		switch (hex[i]){
			case 'A':
				value = 10;
				break;
			case 'B':
				value = 11;
				break;
			case 'C':
				value = 12;
				break;
			case 'D':
				value = 13;
				break;
			case 'E':
				value = 14;
				break;
			case 'F':
				value = 15;
				break;
			default:
				if (hex[i] >=48 && hex[i] <= 57 ) {
					value = hex[i] - '0';
					break;
				}
				else {
					printf("Error:Invalid Hexadecimal\n");
					return(1);
				}
			}
		
	decimal = decimal * 16 + value;
			
		}
	

	

	// if input contains invalid hex digit
	//if (hex[i] > 10 || hex[i] < 'F') {
	//printf("Error:Invalid Hexadcimal\n");
	//}
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}