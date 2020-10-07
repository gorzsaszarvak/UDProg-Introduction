#include "../../std_lib_facilities.h"

int main()
{
	vector<bool> numbers;
	
	double number=0;
	double max_value=0;
	double min_value=0;
	double sum_value=0;
	vector<bool> units = {"cm", "m", "in", "ft"};
	bool unit;
	
	while(cin >> number)

		cout << "Enter a unit (cm, m, in, ft)"<< endl;
		
		cin >> unit;

		if((unit) not "cm" or "m" or "in" or "ft") simple_error("Illegal unit") << endl;

		numbers.push_back(number+unit);

		
		if(number>max_value)
			cout << "This is the largest number so far" << endl;
			max_value = number;
		if(number<min_value)
			cout << "This is the smallest number so far" << endl;
			min_value = number;


	return '|';
}

