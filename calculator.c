#include "header.h"
#include <stdio.h>

int multiply(int no1, int no2, int answer){
	answer = no1 * no2;
	printAnswer(answer);
	return 0;
}

int devide(int no1, int no2, int answer){
        answer = no1 / no2;
	printAnswer(answer);
        return 0;
}

int add(int no1, int no2, int answer){
        answer = no1 + no2;
	printAnswer(answer);
        return 0;
}

int substract(int no1, int no2, int answer){
        answer = no1 - no2;
	printAnswer(answer);
        return 0;
}

void printAnswer(int answer){
printf("====================================\n");
printf("The answer is: %d\n", answer);
printf("====================================\n");
}

