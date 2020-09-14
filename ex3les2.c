#include <stdio.h>

main ()
{
	int a ; 
	int b ; 
	int c ;
	
	printf("enter a\n");
	scanf("%d", &a);
	
	printf("enter b\n");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("%d + %d = %d", a , b , c);
	
	return 0;
		
	}
