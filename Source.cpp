#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	vector<double> x;
	vector<double> y;
	vector<double> z;
	double _x, _y, _z;

	ifstream file;
	file.open("bunnyCoords.txt");
	while (!file.eof())
	{
		file >> _x;
		file >> _y;
		file >> _z;

		//cout <<"es x"<< _x << endl;
		//cout <<"es y"<< _y << endl;
		//cout <<"es z"<< _z << endl;
		x.push_back(_x);
		y.push_back(_y);
		z.push_back(_z);


	}
	file.close();

	for (int i = 0; i < x.size(); ++i)
	{
		cout << "coordenada " << i << x[i] << " " << y[i] << " " << z[i] << endl;
	}

	system("pause");

}