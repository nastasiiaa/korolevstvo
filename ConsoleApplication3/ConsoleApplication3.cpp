// labs2.cpp : определяет точку входа для консольного приложения.
// 

#include "pch.h" 
#include <iostream> 
using namespace std;

int main()
{
	long long int a = 300, b = 560;
	cout << "a*a*b*b=" << a * a*b*b << endl;
	cout << "b/a =" << b / a << endl;

	char symbol_A = 'A';
	cout << symbol_A + a << endl << "A" << a << endl;
	cout << "size of int =" << sizeof(int) << endl;

	int max_int = 0b01111111111111111111111111111111;
	cout << max_int << endl;

	int min_int = 0b1000000000000000000000000000000;
	cout << min_int << endl;

	//вывести таблицу на экран
	// тип _ размер_минимальное значение_максимальное значение 
	cout << "name\t\t|size of|min\t\t\t|max\t\t\n";
	cout << "bool\t\t|" << sizeof(bool) << "\t|" << 0b0000000 << "\t\t\t|" << 0b100000000 << "\t\n";
	cout << "int\t\t|" << sizeof(int) << "\t|" << INT_MIN << "\t\t|" << INT_MAX << "\t\n";
	cout << "char\t\t|" << sizeof(char) << "\t|" << CHAR_MIN << "\t\t\t|" << CHAR_MAX << "\t\n";
	cout << "long\t\t|" << sizeof(long) << "\t|" << LONG_MIN << "\t\t|" << LONG_MAX << "\t\n";
	cout << "short\t\t|" << sizeof(short) << "\t|" << SHRT_MIN << "\t\t\t|" << SHRT_MAX << "\t\n";
	cout << "float\t\t|" << sizeof(float) << "\t|" << FLT_MIN << "\t\t|" << FLT_MAX << "\t\n";
	cout << "double\t\t|" << sizeof(double) << "\t|" << DBL_MIN << "\t\t|" << DBL_MAX << "\t\n";
	cout << "long long\t|" << sizeof(long long) << "\t|" << LLONG_MIN << "\t|" << LLONG_MAX << "\t\n";

	return 0;

}

