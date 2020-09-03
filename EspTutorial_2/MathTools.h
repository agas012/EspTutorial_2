#pragma once
#include <string>
#include <math.h>
#include "Utils.h"
int addition(int a, int b)
{
	int r;
	r = a + b;
	return r;
}

int addtwo(int a, int b=2)
{
	int r;
	r = a + b;
	return r;
}


double OpDist(double x1, double x2, double y1, double y2)
{
	double dist;
	dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;
	return dist;
}

void OpDistVoid(double x1, double x2, double y1, double y2, double& dist)
{
	dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double OpDistZero(double& x1, double& x2, double& y1, double& y2)
{
	double dist;
	dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;
	return dist;
}

long OpFactorial(long var)
{
	if (var > 1)
		return (var * OpFactorial(var-1));
	else
		return 1;
}

//overload wrong
int Op (int a, int b)
{
	return(a * b);
}
//overload wrong
double Op (double a, double b)
{
	return(a / b);
}

int Opsum (int a, int b)
{
	return a + b;
}

double Opsum(double a, double b)
{
	return a + b;
}

template <class T, class U>
bool Opgreaterthan (T a, U b)
{
	return(a > b);
}

template <class T, class U>
std::string OpSumCat(T a, U b)
{
	return(std::to_string(a) + b);
}
