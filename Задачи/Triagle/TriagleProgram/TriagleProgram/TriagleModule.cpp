//Autor: Tikhonov Dmitriy
#include "TriagleModule.h"
#include <cmath>
// ��������� �������� �� �������� ������� �����������
// ������ ����������� ������� a + b > c
int triagle_check(float a, float b, float c)
{
	return !((a + b <= c) || (a + c <= b) || (c + b <= a));
}

// ������ ���� �� ��� �������� ����� ������� ���������
float search_angle(float a, float b, float c)
{
	return (acos((a * a + b * b - c * c) / (2 * a * b))) * 180 / PI;
}
