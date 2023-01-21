#include<iostream>
#include<exception>

int main()
{
	using namespace std;
	cin.exceptions(ios_base::failbit);
	cout << "수를 입력하십시오: ";
	int sum = 0;
	int input;
	try {
		while (cin >> input)
		{
			sum += input;
		}
	}
	catch (ios_base::failure& bf)
	{
		cout << bf.what() << endl;
		cout << "앗! 실수!\n";
	}
	cout << "마지막으로 입력한 값 = " << input << endl;
	cout << "합계 = " << sum << endl;
	return 0;
}