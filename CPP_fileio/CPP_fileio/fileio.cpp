#include<iostream>
#include<fstream>
#include<string>

int main()
{
	using namespace std;
	string filename;

	cout << "�� ������ ���� �̸��� �Է��Ͻʽÿ�: ";
	cin >> filename;
	ofstream fout(filename.c_str());

	fout << "��� ��ȣ ���⿡ �����Ͻʽÿ�.\n";
	cout << "��й�ȣ�� �Է��Ͻʽÿ�:";
	float secret;
	cin >> secret;
	fout << "������ ��й�ȣ�� " << secret << "�Դϴ�.\n";
	fout.close();

	ifstream fin(filename.c_str());
	cout << filename << "������ ������ ������ �����ϴ�:\n";
	char ch;
	while (fin.get(ch))
		cout << ch;
	cout << "���α׷��� �����մϴ�.\n";
	fin.close();
	return 0;
}