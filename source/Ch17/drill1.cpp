#include "../../std_lib_facilities.h"

void fill_array(int*& a, int n)
{
	for (int i = 0; i < n; ++i)
		a[i]=(i+100);
}

void print_array10(ostream& os, int* a)
{
		for (int i = 0; i < 10; ++i)
			os << a[i] << " ";
		cout << endl;

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
		v[i]=(i+100);
}

void print_vector(ostream& os, vector<int> v, int n)
{
		for (int i = 0; i < n; ++i)
			os << v[i] << " ";
		cout << endl;

}

int main()
{

	int* array_zeroes = new int[10];
	print_array10(cout, array_zeroes);

	int* array_hundreds = new int[10];
	fill_array(array_hundreds, 10);
	print_array10(cout, array_hundreds);

	int* array_eleven = new int[11];
	fill_array(array_eleven, 11);
	print_array(cout, array_eleven, 11);

	int* array_twenty = new int[20] ;
	fill_array(array_twenty, 20);
	print_array(cout, array_twenty, 20);

	delete[] array_zeroes;
	delete[] array_hundreds;
	delete[] array_eleven;
	delete[] array_twenty;

	vector<int> hundreds(10);
	fill_vector(hundreds, 10);
	print_vector(cout, hundreds, 10);

	vector<int> eleven(11);
	fill_vector(eleven, 11);
	print_vector(cout, eleven, 11);

	vector<int> twenty(20);
	fill_vector(twenty, 20);
	print_vector(cout, twenty, 20);

	return 0;
}