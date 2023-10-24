#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
void Print_HelloWorld();
namespace MyNamespaceForArray {

	// Заполнение массива Arr, размером n, случайными числами от min до max
	vector <float> CreateRandomNumbers(vector <float> Arr, int min, int max);

	// Вывод массива Arr, размером n,k элементов в строке
	void Print_Vector(vector <float> Arr, int k = 10);

	// Вычисление суммы массива Arr, размером n
	float SumArray(vector <float> Arr);

}
namespace MyNamespaceForFile {
	//Сохранение массива Arr, размером n, в файл с именем s
	void SaveArrInFile(vector <float> Arr, const string& s);

	//Считывание данных с файла s в массив Arr и его размер в n
	vector <float> ReadArraysWithFile(vector <float> Arr, const string& s);
}