#include <stdio.h>

int main (){
	
	int i, n;
	
	for(i = 1; i <= 9; i++) {
		printf ("\n%d X %d = %d\n", i, n, n*i);
		for(int n = 1; n <= 10; n++){
			printf ("%d X %d = %d\n", n, i, i*n);
		}
	}
	
	return 0;
}
