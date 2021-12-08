/*Создайте двумерный массив целых чисел. Удалите из него строку и столбец, на пересечении которых расположен минимальный элемент.

Даны две матрицы. Получите их произведение.

Составьте программу, меняющую местами элементы матрицы симметрично побочной диагонали.

В квадратной таблице обменяйте местами элементы строки и столбца, на пересечении которых находится минимальный из положительных элементов.

Наименьший элемент каждой строки прямоугольной таблицы, начиная со второй, замените наибольшим элементом предыдущей строки.*/

#include <iostream> 
#include<time.h> 

using namespace std;

void print_array(int** array, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m;j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

void random_array(int** array, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m;j++) {
			array[i][j] = rand() % 9 + 1;
		}
	}
}

int main() {
	srand(time(0));
	int n1, m1, n2, m2;
	cin >> n1 >> m1;
	cin >> n2 >> m2;
	int** mas1 = new int* [n1];
	int** mas2 = new int* [n2];
	int** proizv = new int* [n1];
	for (int i = 0; i < n1; i++) {
		mas1[i] = new int[m1];
	}
	for (int i = 0; i < n2; i++) {
		mas2[i] = new int[m2];
	}
	random_array(mas1, n1, m1);
	random_array(mas2, n2, m2);
	print_array(mas1, n1, m1);
	cout << endl;
	print_array(mas2, n2, m2);
	cout << endl;
	for (int i = 0; i < n1; i++) {
		proizv[i] = new int[m2];
	}
	for (int i = 0;i < n1;i++)
	{
		for (int l = 0;l < m2;l++)
		{
			proizv[i][l] = 0;
		}
	}
	int h = 0, y = 0;
	print_array(proizv, n1, m2);
	for (int i = 0;i < n1;i++)
	{
		for (int l = 0;l < m2;l++)
		{

			while (h < m1) {
				while (y < n2) {
					proizv[i][l] += mas1[i][h] * mas2[y][l];
					y++;
					h++;
				}

			}y = 0;
			h = 0;

		}

	}
	print_array(proizv, n1, m2);
	cout << endl;
}