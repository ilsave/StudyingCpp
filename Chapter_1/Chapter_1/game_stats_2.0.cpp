#include <iostream>
using namespace std;

void stats_2()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;
	score += 100;
	cout << "score: " << score << endl;

	/*
	��������� ����������
	*/
	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;
	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;
	lives = 3;
	/*
	���������� ��������� ������� ����������� ����������, � ����� ����������� ��� ���������
	*/
	int bonus = ++lives * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;
	lives = 3;
	/*
	����������� ��������� ������� ��������� ��� ���������, � ����� ����������� ����������
	*/
	bonus = lives++ * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;
	/*
	���� ��������� ���������� ���������� �������� int, �� ��� ��� ��� ���������, � ���� ����� �� ��������� �� 1, �������� ��������, �� �� ��������
	������������� ������ ����������� ���������, �� ���� 0
	*/
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	score++;
	cout << "\nscore: " << score << endl;

	cout << "==================================" << endl << endl;
}
