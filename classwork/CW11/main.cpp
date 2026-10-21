#include <iostream>
using namespace std;

//// перегрузка функции
//void Sum(int a, int b)
//{
//	cout << a + b << endl;
//}
//void Sum(double a, double b)
//{
//	cout << a + b << endl;
//}
//void Sum(char a, char b)
//{
//	cout << a + b << endl;
//}

//template<class T>
//void Sum(T a, T b)
//{
//	cout << a + b << endl;
//}

template<class T, class X>
void Sum(T a, X b)
{
	cout << a + b << endl;
}

void Init(int mas[], int size)
{
	for (int i = 0;i < size;i++)
	{
		mas[i] = rand() % 41 - 20;// -20 +20
	}
}
void Init(double mas[], int size)
{
	for (int i = 0;i < size;i++)
	{
		mas[i] = rand() % 100 * 1.6;
	}
}
void Init(char mas[], int size)
{
	for (int i = 0;i < size;i++)
	{
		mas[i] = rand() % 30 + 65; // буквы
	}
}

template<class T>
void Print(T mas[], int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

/*Написать следующие шаблоны функции:
  1. Функция принимает массив и размер массива, возвращает индекс минимального элемента массива
  2. Функция принимает массив и размер массива, возвращает значение минимального элемента массива
  3. Функция принимает массив и размер массива,возвращает сумму всех элементов массива
  4. Функция принимает массив и размер массива, возвращает количество положительных элементов массива.
*/

template<class T>
int findMin(T arr[], int size)
{
	T min = arr[0];
	int minIndex = 0;

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
	}

	return minIndex;
}

template<class T>
T findMinValue(T arr[], int size)
{
	T min = arr[0];

	for (int i = 1; i < size; i++)
		if (arr[i] < min)
			min = arr[i];

	return min;
}

template<class T>
T sumArray(T arr[], int size)
{
	T sum = 0;

	for (int i = 0; i < size; i++)
		sum += arr[i];

	return sum;
}

template<class T>
T countOfPositiveArray(T arr[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
		if (arr[i] > 0) count++;

	return count;
}

int main()
{
	int arr1[5];
	double arr2[10];
	char arr3[7];

	Init(arr1, 5);
	Init(arr2, 10);
	Init(arr3, 7);

	Print(arr1, 5);
	Print(arr2, 10);
	Print(arr3, 7);

	cout << findMin(arr1, 5) << endl;
	cout << findMin(arr2, 10) << endl;
	cout << findMin(arr3, 7) << endl;

	cout << findMinValue(arr1, 5) << endl;
	cout << findMinValue(arr2, 10) << endl;
	cout << findMinValue(arr3, 7) << endl;

	cout << sumArray(arr1, 5) << endl;
	cout << sumArray(arr2, 10) << endl;
	cout << sumArray(arr3, 7) << endl;

	cout << countOfPositiveArray(arr1, 5) << endl;
	cout << countOfPositiveArray(arr2, 10) << endl;
	cout << countOfPositiveArray(arr3, 7) << endl;

	//Sum(10, 5);
	//Sum(3.6, 2.9);
	//Sum('A', 'B');

	//Sum(12.7, 10);
	//Sum(12, 10.5);
}