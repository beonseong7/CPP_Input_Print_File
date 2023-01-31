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
		cout << file << "파일의 현재 내용은 다음과 같습니다.\n";
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
			cerr << file << "파일을 읽다가 에러 발생.\n";
			exit(EXIT_FAILURE);
		}
	}
}