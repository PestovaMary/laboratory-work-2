#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


void main()
{
	setlocale(LC_ALL, "Rus");
	char str[21] = "Uto testovay stroka.";
	int i, j, k, count;
	for (i = 0; i < strlen(str); i++)
	{
		count = 1;
		for (j = strlen(str); j > i + 1; j--)
		{
			if (str[i] == str[j])
			{
				count++;
				k = j;
				do
				{
					str[j] = str[j + 1];
					j++;
				} while (str[j] != '\0');
				j = k;
			}
		}
		printf("%c - %d \n", str[i], count);
	}
	_getch();
}