#include<iostream>

int main()
{
	using std::cout;
	using std::endl;
	using std::ios_base;
	int temperature = 63;

	cout << "������ ���� : ";
	cout.setf(ios_base::showpos);
	cout << temperature << endl;

	cout << "���α׷��ӵ鿡�� �װ���\n";
	cout << std::hex << temperature << endl;
	cout.setf(ios_base::uppercase);
	cout.setf(ios_base::showbase);
	cout << "�Ǵ�\n";
	cout << temperature << endl;
	cout << true << "!�ǰ���";
	cout.setf(ios_base::boolalpha);
	cout << true << "�̴�.\n";
	return 0;
}