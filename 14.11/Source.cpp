#include<iostream>
#include<ctime>
using namespace std;

void print_array(int array[], int size)
{
	for (int i = 0;i < size;i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	return;
}

void rand_array(int* array, int size)
{
	for (int i = 0; i < size;i++)
	{
		array[i] = rand() % 90 + 10;
	}
}

void qsort(int* array, int begin, int end)
{
	int mid;
	int b_hold = begin;
	int e_hold = end;
	mid = array[begin];
	while (begin < end) 
	{
		while ((array[end] >= mid) && (begin < end))
			end--;
		if (begin != end)
		{
			array[begin] = array[end]; 
			begin++; 
		}
		while ((array[begin] <= mid) && (begin < end))
			begin++; 
		if (begin != end) 
		{
			array[end] = array[begin]; 
			end--; 
		}
	}
	array[begin] = mid; 
	mid = begin;
	begin = b_hold;
	end = e_hold;
	if (begin < mid)
		qsort(array, begin, mid - 1);
	if (end > mid)
		qsort(array, mid + 1, end);
}

int main()
{
	srand(time(0));
	int n;
	cin >> n;
	int* mas = new int[n];
	rand_array(mas, n);
	print_array(mas, n);
	qsort(mas, 0, n - 1);
	print_array(mas, n);
	delete mas;
	return 0;
}