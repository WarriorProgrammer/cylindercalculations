#include <iostream>
#include "circle.h"
#include "cyllinder.h"

using namespace std;

const double PI = 3.14;

 double cyllinderType::volume()
 {
   return circleType::area() * height;
   
 }
void cyllinderType::print()
{
   circleType::print();
   
   cout << "\nHeight = " << height;
}
double cyllinderType::area()
{
   return 2 * circleType::area() + 2*PI*circleType::getRadius()*height;
  
}
double cyllinderType::getHeight()
{
  return height;
}

void cyllinderType::setHeight(double h)
{
  height = h;
}
cyllinderType::cyllinderType(double r,double h)
 : circleType(r)
 {
   height = h;
 }

 
