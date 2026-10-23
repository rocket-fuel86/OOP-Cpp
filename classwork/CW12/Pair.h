#ifndef CW11_PAIR_H
#define CW11_PAIR_H

#include <iostream>
using namespace std;

template<class T1, class T2>
class Pair
{
    T1 a;
    T2 b;
public:
    Pair(T1 a, T2 b);
    void show();
    T1 getFirst();
    T2 getSecond();
    void copyFrom(const Pair& other);
    void clear();
};

template<class T1, class T2>
Pair<T1, T2>::Pair(T1 a, T2 b) {
    this->a = a;
    this->b = b;
}

template<class T1, class T2>
void Pair<T1, T2>::show() {
    cout << a << " " << b << endl;
}

template<class T1, class T2>
T1 Pair<T1, T2>::getFirst() {
    return a;
}

template<class T1, class T2>
T2 Pair<T1, T2>::getSecond() {
    return b;
}

template<class T1, class T2>
void Pair<T1, T2>::copyFrom(const Pair &other) {
    this->a = other.a;
    this->b = other.b;
}

template<class T1, class T2>
void Pair<T1, T2>::clear() {
    this->a = 0;
    this->b = 0;
}

#endif
