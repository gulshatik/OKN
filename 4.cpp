#include<iostream>
#include<string.h>
using namespace std;

void rasshir(char* str, char* ras) {
	size_t n;
	int flag = 0;
	n = strlen(str);
	for (int i= n - 1;i != 0;i--) {
		int l = 1;
		if (str[i] == '.') {
			for (size_t m = i + 1;m <= i + n;m++) {
				str[m] = ras[l];
				l++;
			}
			flag = 1;
			break;
		}
	}
	if (flag == 0) 
	{
		int l = 0;
		size_t h = strlen(ras);
		for (size_t m = n;m <= h + n;m++) {
			str[m] = ras[l];
			l++;
		}
	}
	int g;
	g = 0;
	while (str[g] != '\0') {
		cout << str[g];
		g++;
	}
	return;
}

int main() 
{
	setlocale(LC_ALL, "Rus");
	char str[100],ras[100];
	cout << "Введите название файла"<<endl;
	cin >> str;
	cout << "Введите расширение (с точкой)"<<endl;
	cin>> ras;
	rasshir(str, ras);
}
