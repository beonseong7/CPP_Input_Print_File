#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>

const int LIM = 255;
struct planet
{
	char name[LIM];
	double population;
	double g;
};
const char* file = "planets.dat";
inline void eatline() { while (std::cin.get() != '\n')continue; }

int main()
{
	using namespace std;
	planet pl;
	cout << fixed;
	fstream finout;
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	int ct = 0;
	if (finout.is_open())
	{
		finout.seekg(0);
		cout << file << "������ ���� ������ ������ �����ϴ�.\n";
		while (finout.read((char*)&pl, sizeof pl))
		{
			cout << ct++ << ": " << setw(LIM) << pl.name << ": "
				<< setprecision(0) << setw(12) << pl.population
				<< setprecision(2) << setw(6) << pl.g << endl;
		}
		if (finout.eof())
			finout.clear();
		else
		{
			cerr << file << "������ �дٰ� ���� �߻�.\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << file << "������ �� �� �����ϴ�. ����\n";
		exit(EXIT_FAILURE);
	}
	cout << "������ ���ڵ� ��ȣ�� �Է��Ͻʽÿ�: ";
	long rec;
	cin >> rec;
	eatline();
	if (rec < 0 || rec >= ct)
	{
		cerr << "�ڷҤ��� ���ڵ� ��ȣ�Դϴ�.����\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof pl;
	finout.seekg(place);
	if (finout.fail())
	{
		cerr << "���ڵ带 ã�ٰ� ���� �߻�.\n";
		exit(EXIT_FAILURE);
	}
	finout.read((char*)&pl, sizeof pl);
	cout << "���� ���ڵ��� ����:\n";
	cout << rec << ": " << setw(LIM) << pl.name << ": "
		<< setprecision(0) << setw(12) << pl.population
		<< setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear();
}