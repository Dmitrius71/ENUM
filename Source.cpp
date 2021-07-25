#include <iostream>
#include <Windows.h>

using namespace std;

enum  Color            // Объявляем новое перечисление Colors
{    // Ниже находятся перечислители - все возможные значения этого типа данных
    // Каждый перечислитель отделяется запятой (НЕ точкой с запятой)
	COLOR_RED,      // присваивается 0
	COLOR_BROWN,    // присваивается 1
	COLOR_GRAY,     // присваивается 2
	COLOR_WHITE,    // присваивается 3
	COLOR_PINK,     // присваивается 4

};//  enum должен заканчиваться точкой с запятой


enum Animals
{
	ANIMAL_PIG = -4,   // присваивается -4
	ANIMAL_LION,       // присваивается -3
	ANIMAL_CAT,        // присваивается -2
	ANIMAL_HORSE = 6,
	ANIMAL_ZEBRA = 6,   // имеет то же значение, что и ANIMAL_HORSE
	ANIMAL_COW          // присваивается 7
};

int main()
{
	setlocale(LC_ALL, "rus");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color 1F");

	// Определяем несколько переменных перечисляемого типа Colors
	Color paint = COLOR_RED;
	Color house(COLOR_GRAY);


	int mypet = ANIMAL_PIG;
	std::cout << ANIMAL_HORSE;
	std::cout << "\n";
    std::cout << paint;


	int inputColor;            
	std::cin >> inputColor;
	Color color = static_cast<Color>(inputColor);  // использовать оператор static_cast, чтобы поместить целочисленное значение в перечисляемый тип:


	return 0;
}