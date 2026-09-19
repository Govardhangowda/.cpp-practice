#include <iostream>

int main(){
  std::string name;
  int age;

  std::cout<<"Hi Bro, What's Your Age? ";
  std::cin>>age;

  std::cout<<"Bro, Can i know your name? ";
  std::getline(std::cin >> std::ws ,name);

  std::cout<<"So " <<name<<", You are "<<age<<" years old";

  return 0;
}