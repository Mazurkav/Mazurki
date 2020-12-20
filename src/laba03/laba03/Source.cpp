#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

void Stepen4()
{
	int first;
std::cout << "Chislo v 4 stepeni`" << std::endl;
std::cin >> first;
first = first * first;
first = first * first;
std::cout << first << std::endl;
}
void Stepen6()
{
	int first, second, three;
	std::cout << "Chislo v 6 stepeni`" << std::endl;
	std::cin >> first;
	second = first * first;
	three = second * second;
	first = three * three;
	std::cout << first << std::endl;
}
void Stepen8()
{
	int first, second;
	std::cout << "Chislo v 8 stepeni`" << std::endl;
	std::cin >> first;
	second = first * first;
	second = second * second;
	first = second * second;
	std::cout << first << std::endl;
}
void Stepen10()
{
	int first, second, three, four;
	std::cout << "Chislo v 10 stepeni" << std::endl;
	std::cin >> first;
	second = first * first;
	three = second * second;
	four = three * three;
	first = four * second;
	std::cout << first << std::endl;
}

int main()
{
	Stepen4();
	Stepen6();
	Stepen8();
	Stepen10();

	return 0;
}


