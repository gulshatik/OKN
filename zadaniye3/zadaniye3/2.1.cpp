#include<iostream>
#include<cmath>

using namespace std;

int power, desitich = 0;
int dvoich_desitich(int dvoich) {
	desitich = desitich + (dvoich % 10) * (pow(2, power));
	if (dvoich > 0)
	{
		power += 1;
		return dvoich_desitich(dvoich / 10);
	}
	else 
		cout << desitich; 
}

int main()
{
	int n;
	cin >> n;
	dvoich_desitich(n);
}