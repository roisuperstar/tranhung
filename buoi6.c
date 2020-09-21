#include <stdio.h>
main()
{
	int a, i, sum;

	sum=0;
	for (i=1 ; i <= 5; i++)
		{	printf("moi nhap so bat ky "); 
			scanf("%d", &a);
			sum += a ;
		}
	
	printf("sum = %d", sum);
		
}
