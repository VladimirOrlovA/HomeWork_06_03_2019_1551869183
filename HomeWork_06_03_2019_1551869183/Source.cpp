#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include<cstring>			// ���������� ������ �� �������


using namespace std;

void numberToText(int number)
{
	char textNumber;
}

int main()
{
	// � ���������� �������� ����� ����� � ��������� �� 0 �� 1000000. ���������� ������� ��� ��������� ��������� ����������.

	setlocale(LC_ALL, "Russian");

	int number(1512); // ���� ������ ������� ����������

	/*cout << "������� ����� �� 0 �� 1 000 000";
	cin >> number;*/

	char textNumber[150];

	cin.ignore();
	cin.getline(textNumber, 150);

	cout << textNumber << endl;

	system("pause");
	return 0;
}
