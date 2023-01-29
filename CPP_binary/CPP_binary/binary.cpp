#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>

inline void eatline() { while (std::cin.get() != '\n') continue; }
struct planet
{
	char name[20];
	double population;
	double g;
};
const char* file = "planets.dat";
int main()
{
	using namespace std;
	planet pl;
	cout << fixed << right;

	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << file << "파일의 현재 내용은 다음과 같습니다:\n";
		while (fin.read((char*)&pl, sizeof pl))
		{
			cout << setw(20) << pl.name << ": "
				<< setprecision(0) << setw(12) << pl.population
				<< setprecision(2) << setw(6) << pl.g << endl;
		}
		fin.close();
	}
}