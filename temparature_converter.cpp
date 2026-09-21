#include<iostream>
int main(){
  double temp;
  char unit;
  std::cout<<"Temperature converter\n";
  std::cout<<"Enter The Unit of Temperature that you want to convert to: \n Type F for farenheit \n Type C for Celsius: ";
  std::cin>>unit;
  std::cout<<"\nEnter the Temperature: ";
  std::cin>>temp;

  if(unit =='C'||unit =='c'){
     temp = (temp - 32) / 1.8;
     std::cout<<"The temperature in celsius is: "<<temp<<" C";
  }else if(unit=='F'||unit=='f'){
     temp = (temp * 1.8) + 32;
    std::cout<<"The temperature in farenheit is: "<<temp<<"F";
  }else{
    std::cout<<"Enter either C or F";
  }
  return 0;
}