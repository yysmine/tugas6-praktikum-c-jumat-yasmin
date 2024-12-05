#include <stdio.h> 
main()
{
	int i, N=10;
	printf("Deret Bilangan\n");
	for(i=10; i<=100; i+=10){
		printf("%4i", i);
		N = N - 2;
	}
	
	return 0;
	
}
