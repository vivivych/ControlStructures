#include <iostream>
using namespace std;

//#define FACTORIAL
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2
//#define PYTHAGORAS
void main()
{
	setlocale(LC_ALL, "");
#ifdef FACTORIAL 

	int n, fctrl = 1;
	cout << "Введите число для вычисления факториала: ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		fctrl *= i;
	}
	cout << "Факториал числа " << n << " равен " << fctrl << endl;
#endif

	
#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";

	}
#endif

#ifdef FIBONACCI_1
    int limit; 

    cout << "Введите предел для ряда Фибоначчи: ";
    cin >> limit;

    int a = 0;
    int b = 1;

    cout << "Ряд Фибоначчи до " << limit << ":\n";
    cout << a << " " << b << " ";

    int next; 
    while (b < limit)
    {
        next = a + b; 
        if (next <= limit)
        {
            cout << next << " "; 
            a = b;         
            b = next;
        }
        else {
            break; 
        }
    }
#endif

#ifdef PYTHAGORAS
    const int size = 9; 

    cout << "                ";
    for (int i = 2; i <= size; ++i)
    {
    cout << i << "       "; 
    }
    cout << endl;
    cout << "\t";
    for (int i = 0; i < size; ++i)
    {
    cout << "--------";
    }
    cout << endl;

    for (int i = 2; i <= size; ++i)
    {
        cout << "\t" << i << " | ";
     
        for (int j = 2; j <= size; ++j)
        {
        cout << "\t" << i * j ;
        }
        cout << endl;
    }
#endif

#ifdef FIBONACCI_2
    int count;

    cout << "Введите количество чисел Фибоначчи для вывода: ";
    cin >> count;

    if (count <= 0) 
    {
        cout << "Ошибка,введите положительное значение." << endl; return;
    }
    
    int a = 0;
    int b = 1;

    cout << "Первые " << count << " чисел Фибоначчи:\n";

    if (count >= 1)
    {
     cout << a << " ";
    }
    if (count >= 2) 
    {
     cout << b << " ";
    }

    int next;
    for (int i = 3; i <= count; ++i)
    {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl; 
#endif




}


