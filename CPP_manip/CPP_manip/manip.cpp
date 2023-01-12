#include<iostream>
int main()
{
	using namespace std;
	cout << "하나의 정수를입력하십시오: ";
	int n;
	cin >> n;

	cout << " n			n*n\n";
	cout << n << "          " << n * n << "(10진법)\n";
	cout << hex;
	cout << n << "          ";
	cout << n * n << "(16진법)\n";
	cout << oct << n << "        " << n * n << "(8진법)\n";
	dec(cout);
	cout << n << "       " << n * n << "(10진법)\n";
	return 0;
}