#include <iostream>
template <typename T, typename U>
void compare(T x, U y);

int main(){
  compare(2.1,9);
  return 0;
}
template <typename T, typename U>
void compare(T x, U y){
  (x>y)? std::cout<<x<< " is greater than "<<y : std::cout<<y<< " is greater than "<<x;
}