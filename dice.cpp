#include <iostream>
int main(){
  srand(time(NULL));
  int num =(rand() % 6)+1;
  std::cout<<"Let's roll a die!: "<<num<<"\n";
  return 0;
}