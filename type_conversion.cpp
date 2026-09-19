#include<iostream>
int main(){
  char x= 72;//implicit conversion
  char y= (char) 105;//explicit conversion
  std::cout<<x<<y<<"\n";
  std::cout<<"This was printed using type conversion";
  return 0;
}