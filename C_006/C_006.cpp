#include <iostream>
#include "conio.h"
using namespace std;

//Задание 1. Написать функцию, которая удаляет из строки символ с заданным номером.
void task01(char* str, int index)
{
	char* current = str + index;
	char* next = str + index + 1;
	while (*next != '\0')
	{
		*current++ = *next++;
	}
	*current = '\0';
}
//Задание 2. Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.
void task02(char* str, char symbol)
{
	char* current = str;
	char* currentCheck = str;
	while (*currentCheck != '\0')
	{
		if (*currentCheck == symbol)
		{
			currentCheck++;
		}
		else
		{
			*current++ = *currentCheck++;
		}
	}
	*current = '\0';
}
//Задание 3. Написать функцию, вставляющую в строку в указанную позицию заданный символ.
void task03(char* str, char symbol, int index)
{
	char* current = str;
	while (*current++ != '\0')
	{
	}
	while (current != str + index)
	{
		*current = *(current -1);
		current--;
	}
	*current = symbol;
}
//Задание 4. Написать приложение, которое заменяет все символы точки «.» в строке, введенной пользователем, на восклицательные знаки «!».
void task04(char* str)
{
	char* current = str;
	while (*current != '\0')
	{
		if (*current == '.')
		{
			*current = '!';
		}
		current++;
	}
}

//Задание 5. Пользователь вводит строку символов и искомый символ, сосчитает сколько раз он встречается в строке.
void task05()
{
	char* str = new char[100 * sizeof(char)];
	char symbol;
	int count = 0;
	cout << "input str >> ";
	gets_s(str, 100);
	cout << "imput sumbol >> ";
	symbol = getchar();

	char* current = str;
	while (*current != '\0')
	{
		if (*current == symbol)
		{
			count++;
		}
		current++;
	}
	cout << count << endl;
}

//Задание 6. Пользователь вводит строку.Определить количество букв, количество цифр и количество других символов в строке.
void task06()
{
	char* str = new char[100 * sizeof(char)];
	int countLetters = 0;
	int countNumbers = 0;
	int countOtherCharacters = 0;
	cout << "input str >> ";
	gets_s(str, 100);

	char* current = str;
	while (*current != '\0')
	{
		if ((*current > 64 && *current < 91) || (*current > 96 && *current < 123))
		{
			countLetters++;
		}
		else if (*current > 47 && *current < 58)
		{
			countNumbers++;
		}
		else
		{
			countOtherCharacters++;
		}
		current++;
	}

	cout << "count letters = " << countLetters << endl;
	cout << "count numbers = " << countNumbers << endl;
	cout << "count other characters = " << countOtherCharacters << endl;
}

int main()
{
	setlocale(LC_ALL, "");

	/*cout << "task 01" << endl;
	char* str1 = new char[100 * sizeof(char)];
	int index1;
	cout << "Введите строку >> ";
	gets_s(str1, 100);
	cout << "Введите индекс >> ";
	cin >> index1;
	cout << str1 << endl;
	task01(str1, index1);
	cout << str1 << endl;*/


	/*cout << "task 02" << endl;
	char* str2 = new char[100 * sizeof(char)];
	char symbol2;
	cout << "Введите строку >> ";
	gets_s(str2, 100);
	cout << "Введите символ >> ";
	cin >> symbol2;
	cout << str2 << endl;
	task02(str2, symbol2);
	cout << str2 << endl;*/

	/*cout << "task 03" << endl;
	char* str3 = new char[100 * sizeof(char)];
	char symbol3;
	int index3;
	cout << "Введите строку >> ";
	gets_s(str3, 100);
	cout << "Введите символ >> ";
	cin >> symbol3;
	cout << "Введите индекс >> ";
	cin >> index3;
	cout << str3 << endl;
	task03(str3, symbol3, index3);
	cout << str3 << endl;*/

	/*cout << "task 04" << endl;
	char arr4[] = "qwe.asd.zxc.123";
	char* str4 = arr4;
	cout << str4 << endl;
	task04(str4);
	cout << str4 << endl;*/

	/*cout << "task 05" << endl;
	task05();*/

	/*cout << "task 06" << endl;
	task06();*/
}