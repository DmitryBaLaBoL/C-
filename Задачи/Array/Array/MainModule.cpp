#include "MainModule.h"

void Print_HelloWorld() {
	cout << "Hello World!" << endl;
}


namespace MyNamespaceForArray {
	/*// ���������� ������� Arr, ���������� ������� �� min �� max
	vector <float> CreateRandomNumbers(vector <float> Arr, int min, int max) {
		for (int i = 0; i < Arr.size(); i++)//arr.size()
		{
			Arr[i] = 1.0 * rand() / RAND_MAX * (max - min) + min;
		}
		return Arr;
	}*/

	/*// ����� ������� Arr,�� k ��������� � ������
	void Print_Vector(vector <float> Arr, int k) {
		cout << "������:" << endl;
		for (int i = 0; i < Arr.size(); i++)
		{
			cout << Arr[i] << "  ";
			if ((i + 1) % k == 0) cout << endl;
		}
	}*/


	/*// ���������� ����� ������� Arr
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

	/*//���������� ������� Arr, � ���� � ������ s
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

	/*//���������� ������ � ����� s � ������ Arr 
	vector <float> ReadArraysWithFile(vector <float> Arr, const string& s) {
		char t;
		ifstream file;
		file.open(s);
		float tek;

		if (!file) throw std::runtime_error("����� � ������� �� ����������");
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