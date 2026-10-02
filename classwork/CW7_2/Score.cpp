#include "Score.h"

Score::Score() : points(0) {}

Score::Score(int points)
{
	this->points = points;
}

int Score::getPoints() const
{
	return points;
}

void Score::print() const
{
	cout << "Points: " << points << endl;
}

Score& Score::operator++()
{
	points++;
	return *this;
}

Score Score::operator++(int)
{
	Score temp = *this;
	++points;
	return temp;
}

Score& Score::operator--()
{
	if (points > 0) points--;
	return *this;
}

Score Score::operator--(int)
{
	Score temp = *this;
	if (points > 0) --points;
	return temp;
}