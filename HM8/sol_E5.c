#include <stdio.h>
int main(void)
{
	int array[10];
	int sum = 0;
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < 10; i++)
	{
	if(array[i]>0)
		{
			sum+= array[i];
		}
	}
	printf("%d", sum);
}
