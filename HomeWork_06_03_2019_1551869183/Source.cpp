#include<iostream>
#include<time.h>
#include<Windows.h>
#include<cstring>			// ���������� ������ �� �������
#include<string>

using namespace std;


void numberToText(int *arr, int number)
{
	int tmp = number;
	int size = 0;
	int i = 0;

	string str;

	string str0 = " ����";
	string str1 = " ����";
	string str1a = " ����";
	string str2 = " ���"; 
	string str2e = " ���";
	string str3 = " ���";
	string str4 = " ������";
	string str5 = " ����";
	string str6 = " �����";
	string str7 = " ����";
	string str8 = " ������";
	string str9 = " ������";

	string str11 = " �����������";
	string str12 = " ����������";
	string str13 = " ����������";
	string str14 = " ������������";
	string str15 = " ����������";
	string str16 = " �����������";
	string str17 = " ����������";
	string str18 = " ������������";
	string str19 = " ������������";

	string str10 = " ������";
	string str20 = " ��������";
	string str30 = " ��������";
	string str40 = " �����";
	string str50 = " ���������";
	string str60 = " ����������";
	string str70 = " ���������";
	string str80 = " �����������";
	string str90 = " ���������";

	string str100 = " ���";
	string str200 = " ������";
	string str300 = " ������";
	string str400 = " ���������";
	string str500 = " �������";
	string str600 = " ��������";
	string str700 = " �������";
	string str800 = " ���������";
	string str900 = " ���������";

	string str1t = " �����";
	string str1t1 = "�";
	string str1t2to4 = "�";
	
	
	string str1m = " �������";
	string str1m2to4 = "�";
	string str1m5to9 = "��";


	// ���������� ������ ������� ��� ������ ��������� �����

	while (tmp != 0)
	{
		tmp /= 10;
		size++;
	}
	arr = new int[size];


	// ���������� � ������ ��������� ����� �� ��������

	tmp = number;
	while (tmp != 0)
	{
		arr[i] = tmp % 10;
		tmp = tmp / 10;
		i++;
	}


	// ������� � ������� ���������� ������

	for (i = 0; i < size; i++)		
		cout << arr[i] << " ";
	
	cout << endl;
	
	// ������� ��������� ���������� ���� � ������� � ������

	for (i = size-1; i > 0; i--)
	{
		if (i == 6) // �������
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
		
		if (i == 5 && arr[i - 1] == 0 && arr[i - 2] == 0) // 100 �����
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

		if (i == 5 && arr[i - 1] != 0) // 1x0 �����
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
		
		if (i == 5 && arr[i - 1] == 0 && arr[i - 2] != 0) // 10x ����� /////////////////
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
		
		if (i == 4 && arr[i - 1] == 0 && arr[i - 2] ==0) // 10 �����
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

		if (i == 4 && arr[i] != 1 && arr[i - 1] != 0) // 2x �����
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
		
		if (i == 4 && arr[i] == 1) // 1x �����
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

		if (i == 3 && arr[i + 1] != 1) // ������
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
	// � ���������� �������� ����� ����� � ��������� �� 0 �� 1000000. ���������� ������� ��� ��������� ��������� ����������.

	SetConsoleCP(1251);			// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);	// ��������� ������� �������� win-cp 1251 � ����� ������

	
	const int n = 5;
	int arr[n] = { 0 };
	
	int number(1512); // ���� ������ ������� ����������
	cout << endl<< "������� ����� �� 0 �� 1 000 000 -> ";
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


