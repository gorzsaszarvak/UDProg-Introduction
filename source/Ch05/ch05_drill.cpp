#include "../../std_lib_facilities.h"

int main()
{
try 
{
//---------------------------------------1,2,3,4
	cout << "Success!\n";
//---------------------------------------5
	int res=7;
	vector<int> v(10);
	v[5]=res;
	cout << "Success!\n";
//---------------------------------------6
//	vector<int> v(10);
	v[5]=7;
	if (v[5]==7) cout << "Success!\n";
//---------------------------------------7
	if (cond) cout << "Success!\n";
	else cout << "Fail!\n";
	
	keep_window_open();
	return 0;
}
catch (exception& e) 
{
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) 
{
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
}
