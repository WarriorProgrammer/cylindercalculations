//circle.h
#ifndef CIRCLE_TYPE
#define CIRCLE_TYPE

class circleType
{
public:
 void print();
 //output radius, circumference and area of circle
 void setRadius(double r);
 //Function to set the radius.
 //Postcondition: if (r >= 0) radius = r;
 // otherwise radius = 0;
 double getRadius();
 //Function to return the radius.
 //Postcondition: The value of radius is returned.
 double area();
 //Function to return the area of a circle.
 //Postcondition: Area is calculated and returned.
 double circumference();
 //Function to return the circumference of a circle.
 //Postcondition: Circumference is calculated and returned.
 circleType(double = 10);
private:
 double radius;
};

#endif
