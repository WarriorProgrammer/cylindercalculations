#include <iostream>
#include "circle.h"
#include "cyllinder.h"

using namespace std;

int main() {
  
  
  cyllinderType c2(20,4);
  
  c2.print();
  cout << "\nSurface Area = " << c2.area();
  
  cout << "\n\nVolume = " << c2.volume();
  //c2.area();
  
 cout << endl << endl;
  
  return 0;
  
}
