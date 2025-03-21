#include <iostream>
#include <locale.h>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define SQUARE_2
//#define RHOMBUS
#define CHESSBOARD_1
void main()
{

#ifdef SQUARE
	cout << "Geometry" << endl;

	int size;
	cout << "Input square size : "; cin >> size;

	for (int i = 1; i <= size; i++)
	{
		for (int i = 1; i <= size; i++)
		{
			cout << " *" ;

		}
		cout << endl;
	}
	cout << endl;
#endif
#ifdef TRIANGLE_1
	int size;
	cout << "Input triangle size : "; cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_2

	int size;
	cout << "Input triangle size : "; cin >> size;
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = size; j > i; j--)
		{
			cout << "* ";
		}
		cout << endl;

	}

#endif
#ifdef TRIANGLE_3
	int size;
	cout << "Input triangle size : "; cin >> size;
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << "  ";
		}

		for (int j = size; j > i; j--)
		{
			cout << "* ";
		}
		cout << endl;

	}
#endif
#ifdef TRIANGLE_4
	int size;
	cout << "Input triangle size : "; cin >> size;
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		for (int k = size; k > i; k--)
		{
			cout << "  ";
	    }

		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;

	}
#endif


#define UPPER_LEFT_ANGLE  (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE  (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE   (char)196
#define VERTICAL_LINE     (char)179



#ifdef CHESSBOARD_1
	int size;

	cout << "Input chessboard size : ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((i + j) % 2 == 0)
			{
				cout << (char)219u << (char)219u;
			}
			else
			{
				cout << "  "; 
			}
		}
		cout << endl; 
	}
#endif

#ifdef SQUARE_2
	int size;

	cout << "Input square size : ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((i + j) % 2 == 0)
			{
				cout << "+ ";
			}
			else
			{
				cout << "- ";
			}
		}
		cout << endl;
	}
#endif
#ifdef RHOMBUS

	int height;

	cout << "Input half of rhombus height : ";
	cin >> height;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height - i - 1; j++) {
			cout << " ";
		}
		cout << "/";

		for (int j = 0; j < 2 * i; j++) {
			cout << " ";
		}

		cout << "\\" << endl;
	}

	for (int i = height - 1; i >= 0; i--)
	{
		
		for (int j = 0; j < height - i - 1; j++) {
			cout << " ";
		}

		cout << "\\";

		for (int j = 0; j < 2 * i; j++) {
			cout << " ";
		}

		cout << "/" << endl;
	}


#endif

}