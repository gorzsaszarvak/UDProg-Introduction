#include "../../std_lib_facilities.h"

class My_vector
{
private:	
	long unsigned int sz;
	double* elem;

	void debug(const string& s)
	{
		cerr << this << "->" << s << "; elem pointer: " << elem << endl;
	}
public:
	My_vector(int s): sz(s), elem{new double[s]}
	{
		//debug("(int s) konstruktor");
		for (int i = 0; i < s; ++i) elem[i] = 0;
	}

	My_vector(initializer_list<double> lst) : sz{lst.size()}, elem{new double[sz]}
	{
		//debug("initializer konstruktor");
		copy(lst.begin(), lst.end(), elem);
	}

	My_vector(const My_vector& arg): sz{arg.sz}, elem{new double[arg.sz]}
	{
		//debug("másoló konstruktor");
		copy(arg.elem, arg.elem+arg.sz, elem);
	}

	My_vector& operator=(const My_vector& arg)
	{
		//debug("másoló értékadás");
		double* p = new double[arg.sz];
		copy(arg.elem, arg.elem+arg.sz, p);
		delete[] elem;
		elem = p;
		sz = arg.sz;
		return *this;
	}

	My_vector(My_vector&& arg): sz{arg.sz}, elem{arg.elem}
	{
		//debug("mozgató konstruktor");
		arg.sz = 0;
		arg.elem = nullptr;

	}

	My_vector& operator=(My_vector&& arg)
	{
		delete[] elem;
		elem = arg.elem;
		sz = arg.sz;
		arg.elem = nullptr;
		arg.sz = 0;
		//debug("mozgató értékadás");
		return *this;
	}

	~My_vector() 
	{
		//debug("destruktor");
		delete[] elem;
	}

	double get(int n) const 
	{ 
		return elem[n]; 
	}

	void set(int n, double val) 
	{ 
		elem[n] = val; 
	}

	int size() const 
	{ 
		return sz; 
	}

	double& operator[](int n) 
	{
		return elem[n];
	}
	double operator[](int n) const 
	{
		return elem[n];
	}

};

My_vector fill()
{
	My_vector temp = {15.5, 16.6, 17.7};

	return temp;
}

//My_vector glob(10);

int main()
{
	My_vector v1 {12.2, 13.3, 14.4};

	v1[2] = 6;

	for (int i = 0; i < v1.size(); ++i)
		cout << v1[i] << endl;

	const My_vector v2 {12.2, 13.3, 14.4};

	for (int i = 0; i < v2.size(); ++i)
		cout << v2[i] << endl;

	return 0;
}