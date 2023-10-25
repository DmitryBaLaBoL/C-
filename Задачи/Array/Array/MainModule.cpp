#include "MainModule.h"

void Print_HelloWorld() {
	cout << "Hello World!" << endl;
}


namespace MyNamespaceForArray {
	/*// Заполнение массива Arr, случайными числами от min до max
	vector <float> CreateRandomNumbers(vector <float> Arr, int min, int max) {
		for (int i = 0; i < Arr.size(); i++)//arr.size()
		{
			Arr[i] = 1.0 * rand() / RAND_MAX * (max - min) + min;
		}
		return Arr;
	}*/

	/*// Вывод массива Arr,по k элементов в строке
	void Print_Vector(vector <float> Arr, int k) {
		cout << "Массив:" << endl;
		for (int i = 0; i < Arr.size(); i++)
		{
			cout << Arr[i] << "  ";
			if ((i + 1) % k == 0) cout << endl;
		}
	}*/


	/*// Вычисление суммы массива Arr
	float SumArray(vector <float> Arr) {
		float result = 0;
		for (int i = 0; i < Arr.size(); ++i)
		{
			result = result + Arr[i];
		}
		return result;
	}*/
}
namespace MyNamespaceForFile {

	/*//Сохранение массива Arr, в файл с именем s
	void SaveArrInFile(vector <float> Arr, const string& s) {
		ofstream file;
		file.open(s);

		file << Arr.size() << endl;
		for (int i = 0; i < Arr.size(); ++i)
		{
			file << Arr[i] << endl;
		}
		file.close();
	}*/

	/*//Считывание данных с файла s в массив Arr 
	vector <float> ReadArraysWithFile(vector <float> Arr, const string& s) {
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
	}*/
}