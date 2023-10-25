#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
void Print_HelloWorld();
namespace MyNamespaceForArray {

	// Заполнение массива Arr, размером n, случайными числами от min до max
	template <typename Type>
	vector <Type> CreateRandomNumbers(vector <Type> Arr, int min, int max) {
		for (int i = 0; i < Arr.size(); i++)//arr.size()
		{
			Arr[i] = 1.0 * rand() / RAND_MAX * (max - min) + min;
		}
		return Arr;
	}

	// Вывод массива Arr, размером n,k элементов в строке
	template <typename Type>
	void Print_Vector(vector <Type> Arr, int k) {
		cout << "Массив:" << endl;
		for (int i = 0; i < Arr.size(); i++)
		{
			cout << Arr[i] << "  ";
			if ((i + 1) % k == 0) cout << endl;
		}
	}

	// Вычисление суммы массива Arr, размером n
	template <typename Type>
	Type SumArray(vector <Type> Arr) {
		float result = 0;
		for (int i = 0; i < Arr.size(); ++i)
		{
			result = result + Arr[i];
		}
		return result;
	}

}
namespace MyNamespaceForFile {
	//Сохранение массива Arr, размером n, в файл с именем s
	template <typename Type>
	void SaveArrInFile(vector <Type> Arr, const string& s) {
		ofstream file;
		file.open(s);

		file << Arr.size() << endl;
		for (int i = 0; i < Arr.size(); ++i)
		{
			file << Arr[i] << endl;
		}
		file.close();
	}

	//Считывание данных с файла s в массив Arr и его размер в n
	template <typename Type>
	vector <Type> ReadArraysWithFile(vector <Type> Arr, const string& s) {
		char t;
		ifstream file;
		file.open(s);
		float tek;

		if (!file) throw std::runtime_error("Файла с данными не существует");
		else {
			file >> tek;
			Arr.resize(tek);
			for (int i = 0; i < Arr.size(); ++i)
			{
				file >> Arr[i];
			}
		}
		file.close();
		return Arr;
	}
}