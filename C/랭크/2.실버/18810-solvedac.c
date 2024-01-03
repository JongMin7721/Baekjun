#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b);

int main(void){
	int n1, n2;		//입력
	int ar[300004];
	double m; 	//30% 절사
	int m2;		//절사 int
	int sum = 0;	//난이도 총 합

	scanf("%d", &n1);

	if (n1 == 0)
	{
		printf("0\n");

		return 0;
	}
	
	m = (double)n1 * 0.15;
	m2 = (int)round(m); 

	for (int i = 0; i < n1; i++)
	{
		scanf(" %d", &ar[i]);
	}

	qsort(ar, n1, sizeof(int), compare);

	for (int i = 0; i < n1; i++)
	{
		if (i >= m2 && i < n1 - m2)
		{
			sum += ar[i];
		}
	}

	printf("%.0lf\n", round((double)sum / (n1 - m2 * 2)));
	

	return 0;
}

int compare(const void *a, const void *b)
{
    const int *x = (int *)a;
    const int *y = (int *)b;

    if (*x < *y)
        return 1;
    else if (*x > *y)
        return -1;

    return 0;
}