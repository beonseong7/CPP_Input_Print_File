#include<iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	char ch;
	while (cin.get())
	{
		if (ch != '#')
		{
			cout << ch;
		}
		else
		{
			cin.putback(ch);
			break;
		}
	}
	if (!cin.eof())
	{
		cin.get();
		cout << endl << ch << "�� ���� �Է� �����Դϴ�.\n";
	}
	else
	{
		cout << "���� ���� �����߽��ϴ�.\n";
		std::exit(0);
	}
	while (cin.peek() != '#')
	{
		cin.get(ch);
		cout << ch;
	}
	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch << "�� ���� �Է� �����Դϴ�.\n";
	}
	else
	{
		cout << "���� ���� �����߽��ϴ�.\n";
	}
	return 0;
}