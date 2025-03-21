#include <iostream>
using namespace std;

#define WIDTH 8
void main()

{
	setlocale(LC_ALL, "");
	int h;
	cout << "¬ведите высоту треугольника - "; cin >> h;

	long long int nf = 1;
	cout.width(WIDTH / 2 * (h + 2));
	cout << 1 << "\n";

	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		long long int mf = 1;
		for (int i = 0; i < h - n; i++)
		{
			cout << "    ";
		}
		cout.width(WIDTH);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{

			mf *= m;
			int nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)
			{

				nmf *= nm;
			}
			cout.width(WIDTH);
			cout << nf / mf / nmf;
	}
		cout << endl;




    }













}