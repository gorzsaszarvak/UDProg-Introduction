#include "../../std_lib_facilities.h"


int* ga = new int[10] {1, 2, 4, 8 ,16, 32, 64, 128, 256, 512};


int factorial(int i)
{
	if(i>1) return i*(factorial(i-1));
	return 1;
}


void f(int ar[], int n)
{
	int la[10];
	copy(ga, &ga[10], la);

	for(int i = 0; i < 10; ++i)
		cout << la[i] << ' ';
	cout << endl;

	int* p = new int[n];
	copy(ar, &ar[n], p);

	for(int i = 0; i < n; i++)
		cout << p[i] << ' ';
	cout << endl;

	delete[] p;

}
int main()
{

	f(ga, 10);

	int* aa = new int[10];
	for (int i = 0; i < 10; ++i)
	{
		aa[i]=factorial(i+1);
	}

	f(aa, 10);

	delete[] aa;
	return 0;
}