// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "MainModule.h"
#include <cassert>
using namespace MyNamespaceForFile;
using namespace MyNamespaceForArray;
int main(int argc, char* argv[])
{
    srand(time(NULL));
    // Включаем отображение русских символов
    setlocale(LC_ALL, "Russian");
    // Задаём необходимые переменные
    vector <float> arr, arr2;
    int nSave, nRead; int minimum, maximum;
    string sSave, sRead;

    nSave = stoi(argv[1]); minimum = stoi(argv[2]); maximum = stoi(argv[3]);
    /*cout << "Введите кол-во элементов:";
    cin >> nSave;
    cout << "Введите минимальное число в массиве: ";
    cin >> minimum;
    cout << "Введите максимальное число в массиве: ";
    cin >> maximum;*/

    // Заполняем первый массив случайными числами
    arr.resize(nSave);
    arr = CreateRandomNumbers(arr, minimum, maximum);
    Print_Vector(arr, 10);

    // Проверяем сумма не может быть меньше минимального элемента
    assert(SumArray(arr) >= minimum);   //gbcfgdbnm

    // Выводим сумму массива
    cout << "Сумма массива: " << SumArray(arr) << endl;

    // Запрашиваем путь до файла в который нужно сохранить данные
    sSave = argv[4];
    /*cout << "Введите путь до файла в который нужно сохранить данные: ";
    cin >> sSave;*/

    //Сохраняем массив Array в файл s
    SaveArrInFile(arr, sSave);

    // Запрашиваем путь до файла из которого нужно считать данные
    sRead = argv[5];
    /*cout << "Введите путь до файла из которого нужно считать данные: ";
    cin >> sRead;*/

    try {
        // Заполняем массив Arr2, и его размер в nRead, из файла s
        arr2 = ReadArraysWithFile(arr2, sRead);
        cout << endl;
        Print_Vector(arr2, 10);
    }
    catch (const std::exception& e) {

        cout << e.what() << endl;

    }

    // Освобождаем память
    arr.clear();
    arr2.clear();


    // Добавлено изменение для удалённого репозитория
    cout << "Конец программы" << endl;


    // Добавить size
    // assert
    // binary
}