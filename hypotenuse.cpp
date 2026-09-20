#include <iostream>
#include<cmath>
int main(){
  double a,b,c;
  std::cout<<"Enter The length of the side a: ";
  std::cin>>a;
  std::cout<<"\n";

  std::cout<<"Enter The length of the side b: ";
  std::cin>>b;
  std::cout<<"\n";

  std::cout<<"The length of the hypotenuse is: "<<sqrt(pow(a,2)+pow(b,2));


  return 0;
}