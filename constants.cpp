#include <iostream>

int main(){
  const double PI=3.142;
  double radius=10;
  double circumference=(2*PI*radius);
  double area=(PI*radius*radius);
  std::cout<<"The circumference of circle is: "<<circumference<<"\n";
  std::cout<<"The Area of circle is: "<<area<<"\n";

  
  return 0;
}