#include<iostream>
#include<time.h>
#include<Windows.h>
#include<cstring>			// ���������� ������ �� �������


using namespace std;


void numberToText(int *arr, int number)
{
	int tmp = number;
	int size = 0;
	int i = 0;


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
	
	for (i = size; i > 0; i--)
	{
		if (arr[i] == 1 && i == 3)
			cout << "���� ������" << endl;

		else if (arr[i] == 2 && i == 3)
			cout << "��� ������" << endl;

		else if (arr[i] == 3 && i == 3)
			cout << "��� ������" << endl;
	}

}

int main()
{
	// � ���������� �������� ����� ����� � ��������� �� 0 �� 1000000. ���������� ������� ��� ��������� ��������� ����������.

	SetConsoleCP(1251);			// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);	// ��������� ������� �������� win-cp 1251 � ����� ������

	
	const int n = 5;
	int arr[n] = { 0 };
	char str[8] = "";

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


