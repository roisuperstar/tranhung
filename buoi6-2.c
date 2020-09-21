#include <stdio.h>
main()
{
	int a, i;
	float max, min, avg, sum=0, marks;
	printf ("nhap sy so lop : ");
	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		printf("\nmoi nhap diem sv thu %d : ", i + 1);
		scanf("%f", &marks);
		
		sum += marks;
		if (i==0)	{
						max = marks; 
						min = marks;
					}
		else {
				if (max < marks) max = marks;
				if (min > marks) min = marks;
			}	
	}
	printf ("\ndiem cao nhat la : %f\n", max);
	printf ("diem thap nhat la : %f\n", min);	
}
