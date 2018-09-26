#include <conio.h>
#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int *mass;
	int i, j, N, temp;

	printf("Enter the size of the array\n");
	scanf_s("%d", &N);
	mass = (int*)malloc(N * sizeof(int));

	for (i = 0; i < N; i++)
	{
		mass[i] = rand() % 100;
		printf("%d ", mass[i]);
	}

	printf("\n");

	for (i = 0, j = N - 1; i <= N / 2, j >= N / 2; i++, j--)
	{
		temp = mass[i];
		mass[i] = mass[j];
		mass[j] = temp;
	}
	for (i = 0; i < N; i++)
		printf("%d ", mass[i]);
	_getch();
}
