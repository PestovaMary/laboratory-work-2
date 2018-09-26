#include <conio.h>
#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>


void main()
{
	srand(time(NULL));
	const int N = 5, M = 5;
	int mass[N][M];
	int i, j, min, max = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			mass[i][j] = rand() % 100;
			printf("%d ", mass[i][j]);
		}
		printf("\n");
	}
	min = mass[0][0];

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (mass[i][j] > max) { max = mass[i][j]; }
			if (mass[i][j] < min) { min = mass[i][j]; }
		}
	}
	printf("min = %d, max = %d", min, max);

	_getch();
}