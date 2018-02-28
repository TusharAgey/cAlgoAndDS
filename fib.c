#include <stdlib.h>
#include <stdio.h>
int fib(int fno, int sno, int num){
	if(num == 0)
		return 0;
	printf("%d\n", fno + sno);
	return(fib(sno, fno + sno, num - 1));
}
int main(int argc, char *argv[]){
	if(argc == 2){
		printf("0\n1\n");
		fib(0, 1, atoi(argv[1]) - 2);
		return 0;	
	}
	printf("Usage: ./a.out total_no_of_values_in_fib_series\n");
	return 1;
}

