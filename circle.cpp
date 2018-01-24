#include <iostream>

#include "circle.h"

using namespace std;

const double PI = 3.14;


void circleType::print()
{
  cout << "Radius " << radius;
  
}

void circleType::setRadius(double r)
{
  radius = r;
}

double circleType::getRadius()
{
  return radius;
}

double circleType::area()
{
  
  return PI * radius *radius;
}

double circleType::circumference()
{
  return 2*PI*radius;
}

circleType::circleType(double r)
{
  radius = r;
}

