#include <conio.h>
#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	const int N = 3, M = 3, n = 9;
	int Arr1[n], Arr2[N][M];
	int i, j, k;

	for (k = 0; k < n; k++)
	{
		Arr1[k] = rand() % 100;
		printf("%d ", Arr1[k]);
	}

	printf("\n");
	k = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			Arr2[i][j] = Arr1[k];
			k++;
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%4d", Arr2[i][j]);
		}
		printf("\n");
	}
	_getch();
}