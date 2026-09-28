#include <iostream>
#include <string>
std::string hbd(std::string name,int age);
int main(){
  std::string name;
  int age;

  std::cout<<"Hey dude What's your name?: ";
  std::getline(std::cin,name);
  std::cout<<"\n Hey What is your age? ";
  std::cin>>age;
  std::cout<<hbd(name,age);

  return 0;
}

std::string hbd(std::string name, int age){
  return("\nHappy " + std::to_string(age)+ "th Birthday "+name+" Bro!\n");
}
