#include<iostream>
#include<sstream>
#include<string>
int main()
{
	using namespace std;
	ostringstream outstr;

	string hdisk;
	cout << "하드디스크의 모델명이 무엇입니까? ";
	getline(cin, hdisk);
	int cap;
	cout << "하드 디스크의 용량이 몇 GB입니까?";
	cin >> cap;
	outstr << hdisk << "하드디스크의 용량은 " << cap << "GB입니다.\n";
	string result = outstr.str();
	cout << result;
	return 0;
}