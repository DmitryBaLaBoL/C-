#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
void Print_HelloWorld();
namespace MyNamespaceForArray {

	// ���������� ������� Arr, �������� n, ���������� ������� �� min �� max
	vector <float> CreateRandomNumbers(vector <float> Arr, int min, int max);

	// ����� ������� Arr, �������� n,k ��������� � ������
	void Print_Vector(vector <float> Arr, int k = 10);

	// ���������� ����� ������� Arr, �������� n
	float SumArray(vector <float> Arr);

}
namespace MyNamespaceForFile {
	//���������� ������� Arr, �������� n, � ���� � ������ s
	void SaveArrInFile(vector <float> Arr, const string& s);

	//���������� ������ � ����� s � ������ Arr � ��� ������ � n
	vector <float> ReadArraysWithFile(vector <float> Arr, const string& s);
}