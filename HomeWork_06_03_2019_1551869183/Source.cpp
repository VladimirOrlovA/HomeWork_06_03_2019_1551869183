#include<iostream>
#include<time.h>
#include<Windows.h>
#include<cstring>			// библиотека работы со строкам


using namespace std;


void numberToText(int *arr, int number)
{
	int tmp = number;
	int size = 0;
	int i = 0;


	// определяем размер массива для записи введеного числа

	while (tmp != 0)
	{
		tmp /= 10;
		size++;
	}
	arr = new int[size];


	// записываем в массив введенное число по разрядно

	tmp = number;
	while (tmp != 0)
	{
		arr[i] = tmp % 10;
		tmp = tmp / 10;
		i++;
	}


	// выводим в консоль полученный массив

	for (i = 0; i < size; i++)		
		cout << arr[i] << " ";
	
	cout << endl;
	
	for (i = size; i > 0; i--)
	{
		if (arr[i] == 1 && i == 3)
			cout << "одна тысяча" << endl;

		else if (arr[i] == 2 && i == 3)
			cout << "две тысячи" << endl;

		else if (arr[i] == 3 && i == 3)
			cout << "три тысячи" << endl;
	}

}

int main()
{
	// С клавиатуры вводится целое число в диапазоне от 0 до 1000000. Необходимо вывести его прописной строковый эквивалент.

	SetConsoleCP(1251);			// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);	// установка кодовой страницы win-cp 1251 в поток вывода

	
	const int n = 5;
	int arr[n] = { 0 };
	char str[8] = "";

	int number(1512); // одна тысяча пятьсот двенадцать
	cout << endl<< "Введите число от 0 до 1 000 000 -> ";
	cin >> number;
	cout << endl;

	//numberToArray(arr, n, number);
	numberToText(arr, number);

	//_itoa_s(number, str, 10);

	//numberToText(str);

	

	

	/*cin.ignore();
	cin.getline(textNumber, 150);*/

	system("pause");
	return 0;
}


