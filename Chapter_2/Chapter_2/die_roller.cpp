#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void roll_die()
{

	/*
	� �++ ��������� ��������-�� ������ ��� ��� "���������" ����� �� �������� ������� �������������� ����� � �������, �� � ����� ������ ����������,
	��� �� ������ ��� �������� ������ �� � ������, �� ���� �������� ���� � �� �� ����� ��� ��������� ��������. 
	������� ���� ���������� "�����" ���������� ����������. �� ���� ������� ��� � ������ ���������� ����� ���� �������� ������ ��� �����. � ��� 
	��������� ����� �� ��������, ������ �� ���������� ������� � ����:
	- time(0) ������ ������ �����, ��������� �� ������� � ����
	- static_cast() �������� ���� ��� � �������, � ������: ��� ����� � ���� <unsigned int>
	- srand() ���������� "�����" �� ����������� �����
	*/
	srand(static_cast<unsigned int>(time(0)));
	int number = rand();
	/*
	����� �����, �������� �� 6, ���� � ������� ����� �� 1 �� 5. �������� 1.
	*/
	int die = (number % 6) + 1;
	cout << "\nYor rolled " << die << endl;

}