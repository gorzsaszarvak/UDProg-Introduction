#include "../../std_lib_facilities.h"

int factorial(int i)
{
	if(i>1) return i*(factorial(i-1));
	return 1;
}


vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v)
{
	vector<int> lv(gv.size());
	lv = gv;

	for(int i = 0; i < lv.size(); ++i)
		cout << lv[i] << ' ';
	cout << endl;

	vector<int> lv2(v.size());
	lv2 = v;

	for(int i = 0; i < lv2.size(); ++i)
		cout << lv2[i] << ' ';
	cout << endl;

}

int main()
{
	f(gv);

	vector<int> vv(10);
	
	for (int i = 0; i < vv.size(); ++i)
	{
		vv[i]=factorial(i+1);
	}

	f(vv);

	return 0;
}
