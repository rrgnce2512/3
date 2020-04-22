#pragma once
#include "Figure.h"

class Rectangle :
	public Figure
{
private:
	// Левая нижняя точка
	Point a;
	// Правая верхняя
	Point b;
public:	
	Rectangle();
	Rectangle(Point a, Point b);
	Rectangle(double x1, double y1, double x2, double y2);
	Rectangle(const Rectangle& t);

	~Rectangle();

	void print();

	double Perimetr();
	double Square();
};

