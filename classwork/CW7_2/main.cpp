#include "Score.h"

int main()
{
	Score s;
	(s++).print();
	s.print();
	(++s).print();
	(s--).print();
	s.print();
	(--s).print();
}