#include <stdio.h>
int main(void)
{
	int array[12];
	int sum = 0;
	for(int i = 0; i < 12; i++)
	{
		scanf("%d", &array[i]);
		sum += array[i];
	}
	float sr = sum*1./12;
	printf("%.2f", sr);
}
