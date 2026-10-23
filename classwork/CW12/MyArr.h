#ifndef CW11_MYARR_H
#define CW11_MYARR_H

#include<iostream>
using namespace std;

template<class T>
class MyArray
{
	T * arr;
	int size;
public:
	MyArray();
	MyArray(int s);
	void Init();
	void Print();
	~MyArray();
};

template<class T>
MyArray<T>::MyArray()
{
	arr = nullptr;
	size = 0;
}
template<class T>
MyArray<T>::MyArray(int s)
{
	size = s;
	arr = new T[size] {0};
}
template <class T>
void MyArray<T>::Init()
{
	for (int i = 0;i < size;i++)
	{
		arr[i] = rand() % 100;
	}
}
template<class T>
void MyArray<T>::Print()
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<class T>
MyArray<T>::~MyArray()
{
	delete[] arr;
}

#endif