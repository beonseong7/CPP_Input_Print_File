#include<iostream>
int main()
{
	using namespace std;
	cout << "�ϳ��� �������Է��Ͻʽÿ�: ";
	int n;
	cin >> n;

	cout << " n			n*n\n";
	cout << n << "          " << n * n << "(10����)\n";
	cout << hex;
	cout << n << "          ";
	cout << n * n << "(16����)\n";
	cout << oct << n << "        " << n * n << "(8����)\n";
	dec(cout);
	cout << n << "       " << n * n << "(10����)\n";
	return 0;
}