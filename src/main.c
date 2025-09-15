#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
	if (argc == 4)
	{
		char* op = argv[1];
		char* a = argv[2];
		char* b = argv[3];
		double r = 0;
		if (strcmp(op, "add") == 0) {
			r = _add(atof(a), atof(b));
			printf("%lf",r);
		}
		else if (strcmp(op, "sub") == 0) {
			r = _sub(atof(a), atof(b));
			printf("%lf",r);
		}
		else if (strcmp(op, "mul") == 0) {
			r = _mul(atof(a), atof(b));
			printf("%lf",r);
		}
		else if (strcmp(op, "div") == 0) {
			r = _div(atof(a), atof(b));
			printf("%lf",r);
		}
		else {printf("Erreur de parametres");}
	}
	else if (argc != 3) {printf("Erreur de parametres"); return -1;}
	else {
		char* op = argv[1];
		char* nb = argv[2];

		if (strcmp(op, "car") == -1) {
			printf("Invalid operator");
			return 2;
		}

		double square = _car(atof(nb));
		if (square < 0) {
			printf("Error: received a negative number from car(), expected a positive value");
			return -1;
		}

		printf("Square of %s is %f", nb, square);
	}
	return 0;
}

		
