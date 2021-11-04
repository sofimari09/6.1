#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (!(a[i]>0 || a[i]%2==0))
			S += a[i];
	return S;
}
int Count(const int* const a, const int size)
{
	int b = 0;
	for (int i = 0; i < size; i++)
		if (!(a[i] > 0 || a[i] % 2 == 0))
			b++;
	return b;
}
void Replacement(int a[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (!(a[i] > 0 || a[i] % 2 == 0))
			a[i] = 0;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 26;
	int a[n];

	int Low = -40;
	int High = 20;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "The sum of the elements that satisfy the condition is  " << Sum(a, n) << endl;
	cout << "The number of elements that satisfy the condition is  " << Count(a, n) << endl;
	Replacement(a, n);
	Print(a, n);
	return 0;
}