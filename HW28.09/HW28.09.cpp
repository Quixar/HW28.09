#include <iostream>
#include <ctime>
using namespace std;

int calculateAverage(int ar[], int parameter)
{
	srand(time(0));
	int average = 0;
	for (int i = 0; i < parameter; i++)
	{
		ar[i] = rand() % 10;
		average += ar[i];
	}
	return average / parameter;
}

void searchMinMax(double array[], int a)
{
	int indMax = 0;
	int indMin = 0;
	srand(time(0));
	for (int i = 0; i < a; i++)
	{
		array[i] = rand() % 250;
		array[i] = array[i] / 10;
		if (array[i] > array[indMax])
		{
			indMax = i;
		}
		if (array[i] < array[indMin])
		{
			indMin = i;
		}
	}
	cout << "Min = " << array[indMin] << " indMin = " << indMin << "\n";
	cout << "Max = " << array[indMax] << " indMax = " << indMax << "\n";
}


int main()
{
	const int parameter = 7;
	int ar[parameter] = {};
	double array[parameter] = {};
	searchMinMax(array, parameter);
	int average = calculateAverage(ar, parameter);
	cout << average;

}

