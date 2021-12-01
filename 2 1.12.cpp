/*#include<iostream>
using namespace std;

int sum(char* str)
{
	int sum=0;
	size_t n;
	n = strlen(str);
	sum += atoi(str);
	for (size_t i = 0;i < n;i++) {
		if (str[i]>'9'||str[i]<'0')
		sum += atoi(str+i);
	}
	return sum;
}



int main()
{
	char* str = new char[100];
	cin >> str;
	cout << sum(str);
}*/