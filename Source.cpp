#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	int arr[10]{};
	double sum = 0;


	cout << "������� �������� �������: " << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];

	}

	cout << "�������� ������: ";

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	cout << "\n""������� �������������� ��������� ������� =" << sum / 10 << endl;

	int arrPos[10]{};
	int arrNeg[10]{};
	int Pos = 0; int Neg = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			arrPos[Pos] = arr[i];
			Pos++;
		}
		else
		{
			arrNeg[Neg] = arr[i];
			Neg++;
		}
	}
	cout << "������������� ������: " << endl;

	for (int i = 0; i < Pos; i++)
	{
		cout << arrPos[i] << " ";
	}
	int max = arrPos[0]; int min = arrPos[0];


	for (int i = 0; i < Pos; i++)
	{
		if (max < arrPos[i])
		{
			max = arrPos[i];
		}
		if (min > arrPos[i])
		{
			min = arrPos[i];
		}
	}
	cout << "\n""max =" << max << endl;

	cout << "min =" << min << endl;

	int c = 1;

	cout << "������������ ��������� �������������� ������� =";

	for (int i = 0; i < Pos; i++)
	{
		c *= arrPos[i];
	}

	cout << c << endl;


	cout << "������������� ������: " << endl;

	for (int i = 0; i < Neg; i++)
	{
		cout << arrNeg[i] << " ";
	}

	int Min = arrNeg[0]; int Max = arrNeg[0];
	int x = 0;

	for (int i = 0; i < Neg; i++)
	{
		if (Max < arrNeg[i])
		{
			Max = arrNeg[i];
		}
		if (Min > arrNeg[i])
		{
			Min = arrNeg[i];
		}
	}

	cout << "\n""max =" << Max << endl;

	cout << "min =" << Min << endl;

	cout << "����� ��������� � ������������� ������� =" << endl;

	for (int i = 0; i < Neg; i++)
	{
		x += arrNeg[i];
	}

	cout << x << endl;
}
