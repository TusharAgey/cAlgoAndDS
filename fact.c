#include <stdio.h>
#include <stdlib.h>
int fact(int num){
	if(num == 1)
		return 1;
	return(num * fact(num - 1));
}
int main(int argc, char *argv[]){
	if(argc == 2){
		printf("%d\n", fact(atoi(argv[1])));
		return 0;
	}
	printf("Usage: ./a.out number_to_find_factorial_of\n");
	return 2;
}
