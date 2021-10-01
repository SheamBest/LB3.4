// LB3.4.cpp
// < Шельвах Максим >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 25
#include <iostream>
using namespace std;
int main()
{
	double R; // вхідний аргумент
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;


	// розгалуження в повній формі
	if ((x + R >= y && y >= 0) || 0.5 * (x * x) + 0.5 * (y * y) == 0.5 * (R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
