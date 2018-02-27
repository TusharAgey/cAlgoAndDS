int fib(int fno, int sno, int num){
	if(num == 0)
		return 0;
	printf("%d\n", fno + sno);
	return(fib(sno, fno + sno, num - 1));
}
int main(){
	printf("0\n1\n");
	fib(0, 1, 10);
}

