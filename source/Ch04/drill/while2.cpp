#include "std_lib_facilities.h"

int main()
{
	vector<double> numbers;
	
	double number=0;
	double max_value=0;
	double min_value=0;
	
	while(cin >> number)
	
		numbers.push_back(number);
		
		if(number>max_value)
			cout << "This is the largest number so far";
			max_value = number;
		if(number<min_value)
			cout << "This is the smallest number you have so far";
			min_value = number;


	return '|';
}

