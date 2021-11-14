/*#include <iostream>
using namespace std;

int fib(int n) 
{
	if (n <= 2)
		return 1;
	int  q1=1, q2=1,t;
	for (int i = 3 ;i <= n;i++) 
	{
		t = q2;
		cout << t << " ";
		q2 += q1;
		cout << q2 << " ";
		q1 = t;
		cout << q1 << endl;
	}
	return q2;
}

int main() {
	int n;
	cin>>n;
	fib(n);
	cout<<fib(n);
	return 0;
}*/
