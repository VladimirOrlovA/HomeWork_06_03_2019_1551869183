#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include<cstring>			// библиотека работы со строкам


using namespace std;

void numberToText(int number)
{
	char textNumber;
}

int main()
{
	// С клавиатуры вводится целое число в диапазоне от 0 до 1000000. Необходимо вывести его прописной строковый эквивалент.

	setlocale(LC_ALL, "Russian");

	int number(1512); // одна тысяча пятьсот двенадцать

	/*cout << "Введите число от 0 до 1 000 000";
	cin >> number;*/

	char textNumber[150];

	cin.ignore();
	cin.getline(textNumber, 150);

	cout << textNumber << endl;

	system("pause");
	return 0;
}
