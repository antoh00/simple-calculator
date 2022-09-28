#include "header.h"
#include <stdio.h>

int main(){
	int no1;
	int no2;
	char operator;
	int answer;

	answer = 0;
	
	printf("Write your operation \n");
	scanf("%d%c%d", &no1, &operator, &no2);	

	switch (operator){
		case 'x':
		case '*':
			multiply(no1, no2, answer);
			 printf("Answer: %d \n", answer);
			break;
		case '-':
			 substract(no1, no2, answer);
			  printf("Answer: %d \n", answer);
			 break;
		case '+':
			  add(no1, no2, answer);
			   printf("Answer: %d \n", answer);
			  break;
		default:
			  answer = 0;
			  break;
	}
	return 0;
}
