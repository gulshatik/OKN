/*#include <iostream>
#include <ctime>
using namespace std;

void rand_om() {
	int n1;
	int n2;
	srand(time(0));
	n1 = rand();
	n2 = rand();
	while (n2 % 10 < 1 || n2 % 10 > 6)
		n2 = rand();
	while (n1 % 10 < 1 || n1 % 10 > 6)
		n1 = rand();
	cout << n1%10 << endl << n2%10;
}
int main()
{

	rand_om();
	return 0;
}
*/