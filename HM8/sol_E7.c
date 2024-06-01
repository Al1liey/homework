#include <stdio.h>
void swap(int* a, int* b);
int main(void)
{
	int array[10];
	int temp = 0;
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		swap(&array[i],&array[4-i]);
	}
	int j = 1;
	for(int i = 5; i < 7; i++)
 	{
                swap(&array[i], &array[10-j]);
		j++;
        }
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
