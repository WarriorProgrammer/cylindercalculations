#ifndef CYLLINDER_TYPE
#define CYLLINDER_TYPE
#include "circle.h"

class cyllinderType: public circleType
{
  public:
    void print();
    double volume();
    double area();
    double getHeight();
    void setHeight(double h);
    cyllinderType(double r,double h);
  private:
    double height;
};

#endif
