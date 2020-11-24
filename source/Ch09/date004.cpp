#include "../../std_lib_facilities.h"

class Date
{
private:
	int year, month, day;

public:
	class Invalid {};
	Date(int y, int m, int d): year(y), month(m), day(d) {if (!is_valid()) throw Invalid{}; }

	bool is_valid();
	void add_day(int n);

	int get_year() { return year; }
	int get_month() { return month; }
	int get_day () { return day; }

};

bool Date::is_valid()
{
	if (year <0 || month < 1 || month >12 || day < 1 || day > 31) return false;

	return true;
}

void Date::add_day(int n)
{
	day += n;
	if (day > 31)
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
}

int main()
try{
	Date today {1978, 6, 25};

	cout << "Today: " << today.get_year() << '.' << today.get_month() << '.' << today.get_day() << ".\n";

	Date tomorrow{today};
	tomorrow.add_day(1);

	cout << "Tomorrow: " << tomorrow.get_year() << '.' << tomorrow.get_month() << '.' << tomorrow.get_day() << ".\n";

	return 0;
} 
catch(Date::Invalid)
{
	cout << "Invalid date\n" << endl;

	return 1;
}
catch(exception& e)
{
	cout << e.what() << endl;
	
	return 1;
}