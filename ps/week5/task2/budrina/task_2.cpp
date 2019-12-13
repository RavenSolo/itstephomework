﻿//Напишите программу, которая создает двухмерный массив и заполняет его по следующему
//принципу : пользователь вводит число(например, 3) первый элемент массива принимает
//значение этого числа, последующий элемент массива принимает значение этого числа + 1 
//(т.е. 4 для нашего примера), третий элемент массива предыдущий элемент + 1 (т.е. 5 для нашего примера).
//Созданный массив вывести на экран.

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const  int size = 5;
	int ar[size][size] = {};
	int n;
	cout << "\nВведите 1-й элемент двумерного массива от 0 до "<< size -1<<": ";
	cin >> n;
	if (n < 0 || size <= n) {
		cout << "\nerror\n";
		return 0;
	}

	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			ar[x][y] = n; // Первый элемент массива
			++n; // Формула выведения массива
		}
	}

	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			cout << left << setw(3) << ar[x][y] << " ";
		}
		cout << endl;
	}

}

