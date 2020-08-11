#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
������� �������� �����

1) ��������� ���������� ����
2) ��������� ����������������� �����
3) ���������� ��������� ����
4) ���������� ����������� 
5) ���� ��������?
	�� -> �����
	��� -> ��������� � ���� 2)

*/


/*
��������� ���������� ��������� �����. ������������ ������� ��� �������. ��������� ���� ������� ���������: "������" ��� "������"
*/

void guess_number()
{
	srand(static_cast<unsigned int>(time(0)));
	int number = rand() % 100 + 1; // ����� �� 1 �� 100
	int guess = NULL;
	while (guess != number)
	{
		cout << "\nEnter a guess: ";
		cin >> guess;
		if (guess < number)
		{
			cout << "\nToo low!";
		}
		else if (guess > number)
		{
			cout << "\nToo high!";
		}
		else
		{
			cout << "That's right! Good job!" << endl;
		}
	}
}