#pragma once

#include <iostream>
using namespace std;

class Score
{
	int points;
public:
	Score();
	Score(int points);

	int getPoints() const;
	void print() const;

	Score& operator++();
	Score operator++(int);

	Score& operator--();
	Score operator--(int);
};

