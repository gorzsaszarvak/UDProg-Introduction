#include "../../std_lib_facilities.h"



void print_array(const double a[], int sz)
{
	for (int i = 0; i < sz; ++i)
		cout << a[i] << ' ';
	cout << endl;
}

int stringlen(const char* a)
{
	int n = 0;
	while (a[n]) ++n;
	return n;
}



int main()
{
	double lad[100];

	for(int i = 0; i < 100; ++i)
		lad[i] = i;

	print_array(lad, 100);

	cout << "size of lad: " << sizeof(lad) << endl;

	char ac[] = "brug";

	cout << "size of ac: " << stringlen(ac) << endl;

	return 0;
}