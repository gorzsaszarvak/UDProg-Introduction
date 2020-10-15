#include "../../std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	
	string first_name;

	cin >> first_name;
	
	cout << "Dear " << first_name << ",\n" << "How are you? I am fine. I miss you.\n";

	cout << "Enter the name of a mutual friend:\n";

	string friend_name;

	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "If the sex of your mutual friend is female, enter the letter 'f', otherwise type 'm'.\n";

	char friend_sex = 0;

	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	if (friend_sex!='m' and friend_sex!='f') simple_error("wrong letter");
	

	cout << "How old is the person you're writing to?\n";

	int age = 0;

	cin >> age;

	if (age < 0 || age > 110) simple_error("you're kidding!");

	cout << "I hear you just had a birthday and you are " << age <<" years old.\n";

	if (age < 12)
		cout << "Next year you will be " << age+1 << ".\n";
	if (age == 17)
		cout << "Next year you will be able to vote.\n";
	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "Yours sincerely,\n\n\n";
	cout << "Gorzsa";


	
	return 0;

}
