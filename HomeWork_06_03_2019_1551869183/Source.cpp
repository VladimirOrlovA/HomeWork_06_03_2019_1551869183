#include<iostream>
#include<time.h>
#include<Windows.h>
#include<cstring>			// библиотека работы со строкам
#include<string>

using namespace std;


void numberToText(int *arr, int number)
{
	int tmp = number;
	int size = 0;
	int i = 0;

	string str;

	string str0 = " ноль";
	string str1 = " один";
	string str1a = " одна";
	string str2 = " два"; 
	string str2e = " две";
	string str3 = " три";
	string str4 = " четыре";
	string str5 = " п€ть";
	string str6 = " шесть";
	string str7 = " семь";
	string str8 = " восемь";
	string str9 = " дев€ть";

	string str11 = " одиннадцать";
	string str12 = " двенадцать";
	string str13 = " тринадцать";
	string str14 = " четырнадцать";
	string str15 = " п€тнадцать";
	string str16 = " шестнадцать";
	string str17 = " семнадцать";
	string str18 = " восемнадцать";
	string str19 = " дев€тнадцать";

	string str10 = " дес€ть";
	string str20 = " двадцать";
	string str30 = " тридцать";
	string str40 = " сорок";
	string str50 = " п€тьдес€т";
	string str60 = " шестьдес€т";
	string str70 = " семьдес€т";
	string str80 = " восемьдес€т";
	string str90 = " дев€носто";

	string str100 = " сто";
	string str200 = " двести";
	string str300 = " триста";
	string str400 = " четыреста";
	string str500 = " п€тьсот";
	string str600 = " шестьсот";
	string str700 = " семьсот";
	string str800 = " восемьсот";
	string str900 = " дев€тьсот";

	string str1t = " тыс€ч";
	string str1t1 = "а";
	string str1t2to4 = "и";
	
	
	string str1m = " миллион";
	string str1m2to4 = "а";
	string str1m5to9 = "ов";


	// определ€ем размер массива дл€ записи введеного числа

	while (tmp != 0)
	{
		tmp /= 10;
		size++;
	}
	arr = new int[size];


	// записываем в массив введенное число по разр€дно

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
	
	// выводим текстовый эквивалент цифр в массиве в строку

	for (i = size-1; i > 0; i--)
	{
		if (i == 6) // миллион
		{
			if		(arr[i] == 1) str += str1 + str1m;
			else if (arr[i] == 2) str += str2 + str1m + str1m2to4;
			else if (arr[i] == 3) str += str3 + str1m + str1m2to4;
			else if (arr[i] == 4) str += str4 + str1m + str1m2to4;
			else if (arr[i] == 5) str += str5 + str1m + str1m5to9;
			else if (arr[i] == 6) str += str6 + str1m + str1m5to9;
			else if (arr[i] == 7) str += str7 + str1m + str1m5to9;
			else if (arr[i] == 8) str += str8 + str1m + str1m5to9;
			else if (arr[i] == 9) str += str9 + str1m + str1m5to9;
		}
		
		if (i == 5 && arr[i - 1] == 0 && arr[i - 2] == 0) // 100 тыс€ч
		{
			if		(arr[i] == 1) str += str100 + str1t;
			else if (arr[i] == 2) str += str200 + str1t;
			else if (arr[i] == 3) str += str300 + str1t;
			else if (arr[i] == 4) str += str400 + str1t;
			else if (arr[i] == 5) str += str500 + str1t;
			else if (arr[i] == 6) str += str600 + str1t;
			else if (arr[i] == 7) str += str700 + str1t;
			else if (arr[i] == 8) str += str800 + str1t;
			else if (arr[i] == 9) str += str900 + str1t;
		}

		if (i == 5 && arr[i - 1] != 0) // 1x0 тыс€ч
		{
			if		(arr[i] == 1) str += str100;
			else if (arr[i] == 2) str += str200;
			else if (arr[i] == 3) str += str300;
			else if (arr[i] == 4) str += str400;
			else if (arr[i] == 5) str += str500;
			else if (arr[i] == 6) str += str600;
			else if (arr[i] == 7) str += str700;
			else if (arr[i] == 8) str += str800;
			else if (arr[i] == 9) str += str900;
		}
		
		if (i == 5 && arr[i - 1] == 0 && arr[i - 2] != 0) // 10x тыс€ч /////////////////
		{
			if (arr[i] == 1) str += str100;
			else if (arr[i] == 2) str += str200;
			else if (arr[i] == 3) str += str300;
			else if (arr[i] == 4) str += str400;
			else if (arr[i] == 5) str += str500;
			else if (arr[i] == 6) str += str600;
			else if (arr[i] == 7) str += str700;
			else if (arr[i] == 8) str += str800;
			else if (arr[i] == 9) str += str900;
		}
		
		if (i == 4 && arr[i - 1] == 0 && arr[i - 2] ==0) // 10 тыс€ч
		{
			if		(arr[i] == 1) str += str10 + str1t;
			else if (arr[i] == 2) str += str20 + str1t;
			else if (arr[i] == 3) str += str30 + str1t;
			else if (arr[i] == 4) str += str40 + str1t;
			else if (arr[i] == 5) str += str50 + str1t;
			else if (arr[i] == 6) str += str60 + str1t;
			else if (arr[i] == 7) str += str70 + str1t;
			else if (arr[i] == 8) str += str80 + str1t;
			else if (arr[i] == 9) str += str90 + str1t;
		}

		if (i == 4 && arr[i] != 1 && arr[i - 1] != 0) // 2x тыс€ч
		{
			if		(arr[i] == 2) str += str20;
			else if (arr[i] == 3) str += str30;
			else if (arr[i] == 4) str += str40;
			else if (arr[i] == 5) str += str50;
			else if (arr[i] == 6) str += str60;
			else if (arr[i] == 7) str += str70;
			else if (arr[i] == 8) str += str80;
			else if (arr[i] == 9) str += str90;
		}
		
		if (i == 4 && arr[i] == 1) // 1x тыс€ч
		{
			if		(arr[i - 1] == 1) str += str11 + str1t;
			else if (arr[i - 1] == 2) str += str12 + str1t;
			else if (arr[i - 1] == 3) str += str13 + str1t;
			else if (arr[i - 1] == 4) str += str14 + str1t;
			else if (arr[i - 1] == 5) str += str15 + str1t;
			else if (arr[i - 1] == 6) str += str16 + str1t;
			else if (arr[i - 1] == 7) str += str17 + str1t;
			else if (arr[i - 1] == 8) str += str18 + str1t;
			else if (arr[i - 1] == 9) str += str19 + str1t;
		}

		if (i == 3 && arr[i + 1] != 1) // тыс€ча
		{
			if		(arr[i] == 1) str += str1a + str1t + str1t1;
			else if (arr[i] == 2) str += str2e + str1t + str1t2to4;
			else if (arr[i] == 3) str += str3 + str1t + str1t2to4;
			else if (arr[i] == 4) str += str4 + str1t + str1t2to4;
			else if (arr[i] == 5) str += str5 + str1t;
			else if (arr[i] == 6) str += str6 + str1t;
			else if (arr[i] == 7) str += str7 + str1t;
			else if (arr[i] == 8) str += str8 + str1t;
			else if (arr[i] == 9) str += str9 + str1t;
		}
		
		
	}

	

	cout << str << endl;
}

int main()
{
	// — клавиатуры вводитс€ целое число в диапазоне от 0 до 1000000. Ќеобходимо вывести его прописной строковый эквивалент.

	SetConsoleCP(1251);			// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);	// установка кодовой страницы win-cp 1251 в поток вывода

	
	const int n = 5;
	int arr[n] = { 0 };
	
	int number(1512); // одна тыс€ча п€тьсот двенадцать
	cout << endl<< "¬ведите число от 0 до 1 000 000 -> ";
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


