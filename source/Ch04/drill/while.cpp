#include "../../std_lib_facilities.h"

int main()
{
	vector<double> numbers;
	
	double first_number=0;
	double second_number=0;
	
	while(numbers.size()%2!=0)
	
		cin >> first_number;
		numbers.push_back(first_number);
		cin >> second_number;
		numbers.push_back(second_number);
		
		if(first_number!=second_number)
			if(first_number<second_number)
				cout << "The smaller value is:" << first_number << ", The larger value is:"<< second_number;
			else
				cout << "The smaller value is:" << second_number << ", The larger value is:"<< first_number;
				
		else
			cout << "The numbers are equal.";
		
		if(abs(first_number-second_number)<0.01)
			cout << "The numbers are almost equal";
		

	return '|';
}
