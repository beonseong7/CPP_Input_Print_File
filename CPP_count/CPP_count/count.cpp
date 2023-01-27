#include<iostream>
#include<fstream>
#include<cstdlib>
int main(int argc, char* argv[])
{
	using namespace std;
	if (argc == 1)
	{
		cerr << "����: " << argv[0] << "filename[s]\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin;
	long count;
	long total = 0;
	char ch;
	for (int file = 1; file < argc; file++)
	{
		fin.open(argv[file]);
		if (!fin.is_open())
		{
			cerr << argv[file] << "������ ���� �����ϴ�.\n";
			fin.clear();
			continue;
		}
		count = 0;
		while (fin.get(ch))
			count++;
		cout << argv[file] << "���Ͽ� ��� �ִ� ���� ����" << count << "�Դϴ�\n";
		total += count;
		fin.clear();
		fin.close();
	}
	cout << "��ü���Ͽ� ��� �ִ� ���� ���� " << total << "�Դϴ�.\n";
	return 0;
}