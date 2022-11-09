// lab_6.1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void mas(int* t, const int size, const int max, const int min)
{
	int M;
	for (int i = 0; i < size; i++)
	{
		M = t[i] = min + rand() % (max - min + 1);
		cout << M << " ";
	}
}
void sum(int* t, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
	{
		if ((t[i] > 0) && (i % 4 != 0))
		{
			S += t[i];
		}
	}
	cout << endl;
	cout << "Sum = " << S << endl;
}
void count(int* t, const int size)
{
	int C = 0;
	for (int i = 0; i < size; i++)
	{
		if ((t[i] > 0) && (i % 4 != 0))
		{
			C++;
		}
	}
	cout << endl;
	cout << "Count = " << C << endl;
}
void mas2(int* t, const int size)
{
	{
		for (int i = 0; i < size; i++) {
			if ((t[i] > 0) && (i % 4 != 0))
			{
				t[i] = 0;
			}
			cout << t[i] << " ";
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));
	const int n = 20;
	int t[n];
	int max = 73;
	int min = 4;
	mas (t, n, max, min);
	sum (t, n);
	count (t, n);
	mas2 (t, n);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
