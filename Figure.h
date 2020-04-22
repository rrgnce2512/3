#pragma once

#include "point.h"
#include <iostream>


class Figure
{
public:
	virtual double Perimetr() = 0;
	virtual double Square() = 0;
	virtual void print() = 0;
};

