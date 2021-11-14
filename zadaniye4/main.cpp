#include<iostream>
#include<ctime>
using namespace std;
void print_array(int array[], int size)
{
	for (int i = 0;i < size;i++) {
		cout << array[i] << " ";
	}
	return;
}
void three(int array[], int size)
{
	srand(time(0));
	for (int i = 0;i < size;i++)
	{
		array[i] = rand() % 1000 + 1000;
	}
}
void ar_pr(int razn, int first_el, int array[], int size)
{
	array[0] = first_el;
	for (int i = 1;i < size;i++) {
		array[i] = first_el + razn * i;
	}
}
int counter(int array[], int size)
{
	int count = 0, N;
	for (int i = 0;i < size;i++)
	{
		N = array[i] / 10;
		N %= 10;
		if (N % 2 == 0)
			count++;
	}
	return count;
}
void array_(int array[], int size)
{
	for (int i = 0;i < size;i++)
	{
		array[i] = i + 1;
	}
}

void rand_array(int array[], int size)
{
	srand(time(0));
	for (int i = 0; i < size;i++)
	{
		int a = rand() % size;
		std::swap(array[i], array[a]);
	}
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int l;
	cout << "¬ведите номер задани€ (1,2,3)" << endl;
	cin >> l;
	int razn = 1, first_el = 1, n;
	cout << "Bведите размер массива"<<endl;
	cin >> n;
	int* mass = new int[n];
	if (l == 1) {
		cout << "¬ведите первый элемент арифметической прогрессии" << endl;
		cin >> first_el;
		cout << "¬ведите разность арифметической прогрессии" << endl;
		cin >> razn;
		ar_pr(razn, first_el, mass, n);
		print_array(mass, n);
		cout << endl;
	}
	if (l == 2) {
		array_(mass, n);
		rand_array(mass, n);
		print_array(mass, n);
		cout << endl;
	}
	if (l == 3) {
		three(mass, n);
		print_array(mass, n);
		cout << endl <<"„исло элементов, у которых втора€ с конца цифра Ц чЄтна€: "<< counter(mass, n);
	}
	delete [] mass;
	return 0;
}
