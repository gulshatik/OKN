#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	size_t n;
	char str[100];
	cin >> str;
	n = strlen(str);
	size_t m = n;
	size_t i;
	for (i = 0;i < n/2;i++) {
		if (str[i] == str[m - 1]) {
			m--;
		}
		else {
			cout << " не является паллиндромом";
			return 0;
		}
	}
	cout<<"является паллиндромом";
}
