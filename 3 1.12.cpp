/*<iostream>
using namespace std;

int main()
{
	char str[100];
	cin >> str;
	char raz[] = " ";
	char* el = NULL;
	char* next_el = NULL;
	el = strtok_s(str, raz, &next_el);
	cout << el << ' ';
	el = strtok_s(NULL, raz, &next_el);
	cout << el[0] << '.';
	el = strtok_s(NULL, raz, &next_el);
	cout << el[0] << '.';
}*/