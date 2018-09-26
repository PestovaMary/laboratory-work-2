#include <conio.h>
#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	const int N = 10, M = 10;
	int Arr[N][M];
	int i = 0, j, temp = 1, coil = 0;

	while (coil < N*M)
	{
		i++;
		for (j = i - 1; j < M - i + 1; j++)
		{
			Arr[i - 1][j] = temp++;
			coil++;
		}

		for (j = i; j < N - i + 1; j++)
		{
			Arr[j][M - i] = temp++;
			coil++;
		}

		for (j = M - i - 1; j >= i - 1; j--)
		{
			Arr[N - i][j] = temp++;
			coil++;
		}

		for (j = N - i - 1; j >= i; j--)
		{
			Arr[j][i - 1] = temp++;
			coil++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%4d", Arr[i][j]);
		};
		printf("\n");
	}

	_getch();
}