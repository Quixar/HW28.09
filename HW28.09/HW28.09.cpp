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

void reverseArray(double list[], int parameter){
	int left = 0;
	int right = parameter - 1;
	while (left < right) {
		double temp = list[left];
		list[left] = list[right];
		list[right] = temp;
	}
}

int main()
{
	const int parameter = 7;
	int ar[parameter] = {};
	double array[parameter] = {};
	double list[parameter] = {};
	searchMinMax(array, parameter);
	int average = calculateAverage(ar, parameter);
	cout << average;
	for (int i = 0; i < parameter; i++)
	{
		list[i] = rand() % 250;
		list[i] = list[i] / 10;
		cout << list[i] << " ";
	}
	reverseArray(list, parameter);
	for (int i = 0; i < parameter; i++) {
		cout << list[i] << " ";
	}
}

