// LB3.4.cpp
// < ������� ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 25
#include <iostream>
using namespace std;
int main()
{
	double R; // ������� ��������
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;


	// ������������ � ����� ����
	if ((x + R >= y && y >= 0) || 0.5 * (x * x) + 0.5 * (y * y) == 0.5 * (R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
