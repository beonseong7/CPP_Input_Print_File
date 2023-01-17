#include<iostream>

int main()
{
	using std::cout;
	using std::endl;
	using std::ios_base;
	int temperature = 63;

	cout << "오늘의 수온 : ";
	cout.setf(ios_base::showpos);
	cout << temperature << endl;

	cout << "프로그래머들에게 그값은\n";
	cout << std::hex << temperature << endl;
	cout.setf(ios_base::uppercase);
	cout.setf(ios_base::showbase);
	cout << "또는\n";
	cout << temperature << endl;
	cout << true << "!의값은";
	cout.setf(ios_base::boolalpha);
	cout << true << "이다.\n";
	return 0;
}