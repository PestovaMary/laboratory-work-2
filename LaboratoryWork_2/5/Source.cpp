#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


void main()
{
	setlocale(LC_ALL, "Rus");
	char str[21] = "Uto testovay stroka.";
	int i, j, temp;
	for (i = 0; i < strlen(str); i++)
	{
		for (j = strlen(str); j > i + 1; j--)
		{
			if (str[i] == str[j])
			{
				temp = j;
				do
				{
					str[j] = str[j + 1];
					j++;
				} while (str[j] != '\0');
				j = temp;
			}
		}
	}
	puts(str);
	printf("%d", strlen(str));
	_getch();
}