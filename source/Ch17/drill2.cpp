#include "../../std_lib_facilities.h"

void fill_array(int*& a, int n)
{
	for (int i = 0; i < n; ++i)
		a[i]=pow(2, i);

}

void print_array(ostream& os, int*a, int n)
{
		for (int i = 0; i < n; ++i)
			os << a[i] << " ";
		cout << endl;

}

void fill_vector(vector<int>& v, int n)
{
	for (int i = 0; i < n; ++i)
		v[i]=pow(2, i);
}

void print_vector(ostream& os, vector<int> v, int n)
{
		for (int i = 0; i < n; ++i)
			os << v[i] << " ";
		cout << endl;

}

int main()
{

	int* p1 = new int{7};

	cout << "p1: " << p1 << "; contents of p1: " << *p1 << endl;

	int* p2 = new int[7];
	fill_array(p2, 7);


	cout << "p2: " << p2 << "; contents of p2: ";
	print_array(cout, p2, 7);

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << "p1: " << p1 << "; contents of p1: " << *p1 << endl;

	cout << "p2: " << p2 << "; contents of p2: ";
	print_array(cout, p2, 7);

	delete p1;
	delete[] p2;

	p1 = new int[10];
	fill_array(p1, 10);
	p2 = new int[10];

	for (int i = 0; i < 10; ++i)
		p2[i]=p1[i];
	cout << "p1: " << p2 << "; contents of p1: ";
	print_array(cout, p1, 10);

	cout << "p2: " << p2 << "; contents of p2: ";
	print_array(cout, p2, 10);

	vector<int> v1(10);
	fill_vector(v1, 10);

	vector<int> v2(10);

	for (int i = 0; i < 10; ++i)
		v2[i]=v1[i];

	cout << "v1: ";
	print_vector(cout, v1, 10);

	cout << "v2: ";
	print_vector(cout, v2, 10);

	delete[] p1;
	delete[] p2;

	return 0;
}
