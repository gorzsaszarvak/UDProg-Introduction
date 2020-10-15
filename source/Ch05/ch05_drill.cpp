#include "../../std_lib_facilities.h"

int main()
{
try 
{
//---------------------------------------1,2,3,4
	cout << "1,2,3,4 Success!\n";
//---------------------------------------5
	int res=7;
	vector<int> v(10);
	v[5]=res;
	cout << "5 Success!\n";
//---------------------------------------6
//	vector<int> v(10);
	v[5]=7;
	if (v[5]==7) cout << "6 Success!\n";
//---------------------------------------7
	if (cout) cout << "7 Success!\n";
	else cout << "7 Fail!\n";
//---------------------------------------8
	bool c=false;
	if(c==false) cout << "8 Success!\n";
	else cout << "8 Fail!\n";
//---------------------------------------9
	string s="ape";
	boo c="fool"<s;
	if (c) cout << "9 Success!\n";
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
