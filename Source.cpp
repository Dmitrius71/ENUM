#include <iostream>
#include <Windows.h>

using namespace std;

enum  Color            // ��������� ����� ������������ Colors
{    // ���� ��������� ������������� - ��� ��������� �������� ����� ���� ������
    // ������ ������������� ���������� ������� (�� ������ � �������)
	COLOR_RED,      // ������������� 0
	COLOR_BROWN,    // ������������� 1
	COLOR_GRAY,     // ������������� 2
	COLOR_WHITE,    // ������������� 3
	COLOR_PINK,     // ������������� 4

};//  enum ������ ������������� ������ � �������


enum Animals
{
	ANIMAL_PIG = -4,   // ������������� -4
	ANIMAL_LION,       // ������������� -3
	ANIMAL_CAT,        // ������������� -2
	ANIMAL_HORSE = 6,
	ANIMAL_ZEBRA = 6,   // ����� �� �� ��������, ��� � ANIMAL_HORSE
	ANIMAL_COW          // ������������� 7
};

int main()
{
	setlocale(LC_ALL, "rus");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color 1F");

	// ���������� ��������� ���������� �������������� ���� Colors
	Color paint = COLOR_RED;
	Color house(COLOR_GRAY);


	int mypet = ANIMAL_PIG;
	std::cout << ANIMAL_HORSE;
	std::cout << "\n";
    std::cout << paint;


	int inputColor;            
	std::cin >> inputColor;
	Color color = static_cast<Color>(inputColor);  // ������������ �������� static_cast, ����� ��������� ������������� �������� � ������������� ���:


	return 0;
}