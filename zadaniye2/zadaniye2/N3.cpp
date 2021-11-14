#include <iostream>
using namespace std;

int sumdel_(int a) {
	int sum = 1;
	for (int i = 2;i < a / 2 + 1;i++)
	{
		if (a % i == 0) {
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int deliteli_1,deliteli_2, flag = 0;
	for (int a = 1;a <= 10000;a++)
	{
		deliteli_1 = sumdel_(a);
		deliteli_2 = sumdel_(deliteli_1);
		if (a == deliteli_2 && a !=deliteli_1 && flag == 0)
		{
			cout << a << " " << deliteli_1<<endl;
			flag = 1;
		}
		else if (a == deliteli_2 && a !=deliteli_1 && flag == 1)
		{
			flag = 0;
		}
	}
}