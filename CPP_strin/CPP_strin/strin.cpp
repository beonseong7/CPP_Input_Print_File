#include<iostream>
#include<sstream>
#include<string>
int main()
{
	using namespace std;
	string lit = "�漻 �ε鷹 �ɾ���� ���� ��Ǯ�� "
		"���� �� ������ ���� ��� "
		"�Ʊ⾾ �Ǿ� ���� �ٶ� ��ٸ�����.";
	istringstream instr(lit);
	string word;;
	while(instr >> word)
		cout << word << endl;
	return 0;
}