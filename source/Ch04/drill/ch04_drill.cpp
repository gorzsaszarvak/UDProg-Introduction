#include "../../std_lib_facilities.h"

int main()
{
	constexpr double m_per_inch = 0.0254;
	constexpr double m_per_cm = 0.01;
	constexpr double m_per_ft = 0.3048;

	double length = -1;
	char unit = 0;
	vector<double> values;
	double lastvalue = 0;
	double sum = 0;
	double minvalue = 99999999;
	double maxvalue = 0;

	cout << "Enter a number and a unit (c, m, i, f):\n";
	
	while(cin >> length >> unit)
	{
		switch (unit)
		{
		case 'i':
			lastvalue = length * m_per_inch;
			values.push_back(lastvalue);
			sum += lastvalue;
			cout << lastvalue << "m\n";
			break;

		case 'm':
			lastvalue = length;
			values.push_back(length);
			sum += lastvalue;
			cout << lastvalue << "m\n";
			break;

		case 'c':
			lastvalue = length * m_per_cm;
			values.push_back(lastvalue);
			sum += lastvalue;
			cout << lastvalue << "m\n";
			break;

		case 'f':
			lastvalue = length * m_per_ft;
			values.push_back(lastvalue);
			sum += lastvalue;
			cout << lastvalue << "m\n";
			break;

		default:
			cout << "Illegal unit.\n";
			lastvalue=0;
			break;
		}

		if (lastvalue!=0 and (lastvalue < minvalue))
		{
			minvalue = lastvalue;
			cout << "smallest so far\n";
		}
		else if (lastvalue!=0 and (lastvalue > maxvalue))
		{
			maxvalue = lastvalue;
			cout << "largest so far\n";
		}

		
		cout << maxvalue << " " << minvalue << "\n";

	}

	cout << "sum of values: " << sum << "m \n";

	sort(values.begin(), values.end());

	for (int i = 0; i < values.size(); i++)
			cout << values[i] <<"m, ";


	return '|';
}