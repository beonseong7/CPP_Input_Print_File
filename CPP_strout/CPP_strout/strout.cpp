#include<iostream>
#include<sstream>
#include<string>
int main()
{
	using namespace std;
	ostringstream outstr;

	string hdisk;
	cout << "�ϵ��ũ�� �𵨸��� �����Դϱ�? ";
	getline(cin, hdisk);
	int cap;
	cout << "�ϵ� ��ũ�� �뷮�� �� GB�Դϱ�?";
	cin >> cap;
	outstr << hdisk << "�ϵ��ũ�� �뷮�� " << cap << "GB�Դϴ�.\n";
	string result = outstr.str();
	cout << result;
	return 0;
}