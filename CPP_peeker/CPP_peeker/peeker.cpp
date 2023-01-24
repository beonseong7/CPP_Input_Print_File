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
		cout << endl << ch << "은 다음 입력 문자입니다.\n";
	}
	else
	{
		cout << "파일 끝에 도달했습니다.\n";
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
		cout << endl << ch << "은 다음 입력 문자입니다.\n";
	}
	else
	{
		cout << "파일 끝에 도달했습니다.\n";
	}
	return 0;
}