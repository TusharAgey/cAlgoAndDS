#include <stdio.h>
int main(){
	if(argc == 2){
		printf("%d\n", fact(atoi(argv[1])));
		return 0;
	}
	printf("Usage: ./a.out number_to_find_factorial_of\n");
}
