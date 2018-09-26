#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


void main()
{
	setlocale(LC_ALL, "Rus");
	char str1[30], str2[2];
	printf("¬ведите строку\n");
	gets_s(str1);

	printf("¬ведите символ, который нужно удалить\n");
	gets_s(str2);

	int i, temp;
	for (i = 0; i < strlen(str1); i++)
	{
		if (str1[i] == str2[0])
		{
			temp = i;

			do
			{
				str1[i] = str1[i + 1];
				i++;
			} while (str1[i] != '\0');

			i = temp;
		}
	}
	puts(str1);
	_getch();
}