#include "../../std_lib_facilities.h"
void swap_v(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

/*void swap_cr(const int& a, const int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
*/

int main()
{
	int x = 7;
	int y = 9;
	cout << "x: " << x << ", y: " << y << endl;

	swap_v(x,y);
	cout << "swap_v(): x: " << x << ", y: " << y << endl;

	swap_r(x,y);
	cout << "swap_r(): x: " << x << ", y: " << y << endl;

	//swap_cr(x,y);

	swap_v(7,9);
	cout << "swap_v(numbers) 7: " << x << ", 9: " << y << endl;

	const int cx=7;
	const int cy=9;

	swap_v(cx,cy);
	cout << "swap_v(): cx: " << cx << ", cy: " << cy << endl;

	swap_v(7.7, 9.9);
	cout << "swap_v(numbers) 7.7: " << x << ", 9.9: " << y << endl;

	double dx = 7.7;
	double dy = 9.9;
	cout << "dx: " << dx << ", dy: " << dy << endl;

	swap_v(dx, dy);
	cout << "dx: " << dx << ", dy: " << dy << endl;
	
	return 0;
}