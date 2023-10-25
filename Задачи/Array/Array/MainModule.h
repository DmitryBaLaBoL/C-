#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
void Print_HelloWorld();
namespace MyNamespaceForArray {

	// ���������� ������� Arr, �������� n, ���������� ������� �� min �� max
	template <typename Type>
	vector <Type> CreateRandomNumbers(vector <Type> Arr, int min, int max) {
		for (int i = 0; i < Arr.size(); i++)//arr.size()
		{
			Arr[i] = 1.0 * rand() / RAND_MAX * (max - min) + min;
		}
		return Arr;
	}

	// ����� ������� Arr, �������� n,k ��������� � ������
	template <typename Type>
	void Print_Vector(vector <Type> Arr, int k) {
		cout << "������:" << endl;
		for (int i = 0; i < Arr.size(); i++)
		{
			cout << Arr[i] << "  ";
			if ((i + 1) % k == 0) cout << endl;
		}
	}

	// ���������� ����� ������� Arr, �������� n
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
	//���������� ������� Arr, �������� n, � ���� � ������ s
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

	//���������� ������ � ����� s � ������ Arr � ��� ������ � n
	template <typename Type>
	vector <Type> ReadArraysWithFile(vector <Type> Arr, const string& s) {
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
	}
}