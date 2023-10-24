//Autor: Tikhonov Dmitriy

/*27 Даны действительные положительные числа a, b, c.
По трем сторонам с длинами a, b, c можно построить
треугольник. Найти углы треугольника.*/

#include <iostream>
#include "TriagleModule.h"
#include <cmath>   
// #define NDEBUG
#include <cassert>  
#include <string>

using namespace std;

const float EPS = 0.0001;

int main(int argc, char* argv[])
{
	assert(triagle_check(10, 10, 10) == 1);
	assert(triagle_check(10, 2, 1) == 0);
	assert(triagle_check(16, 15, 10) == 1);

	assert(search_angle(10, 10, 10) == 60);
	assert(search_angle(3, 4, 5) == 90);
	assert(abs(search_angle(6, 7, 8) - 75.5225) < EPS);



	setlocale(LC_ALL, "russian");
	// Переменные a,b,c для хранения длин сторон
	float a, b, c;
	// Переменные ang1,ang2,ang3 для хранения углов
	float ang1, ang2, ang3;

	// Не смог разобраться как включить русский язык
	// Пробовал и SetLocale и SetConsoleCP(1251) 
	// И шрифты менял в консоли, не помогло(

	// Вводим длины сторон
	a = stoi(argv[1]); b = stoi(argv[2]); c = stoi(argv[3]);
	/*cout << "Cторона a = ";
	cin >> a;
	cout << "Cторона b = ";
	cin >> b;
	cout << "Cторона c = ";
	cin >> c;*/

	// Проверяем образуют ли стороны треугольник
	if (triagle_check(a, b, c) != 1) cout << "Это не треугольник";
	else
	{
		// Ищем углы по формуле
		ang1 = search_angle(a, b, c);
		ang2 = search_angle(a, c, b);
		ang3 = 180 - ang1 - ang2;

		cout << "Угол 1 = " << ang1 << endl;
		cout << "Угол 2 = " << ang2 << endl;
		cout << "Угол 3 = " << ang3 << endl;
	}
	cin >> a;

}