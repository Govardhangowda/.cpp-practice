#include<iostream>
int main(){
  std::string name;
  double lucky;
  while(name.empty()){
    std::cout<<"Hey man Enter your name: ";
    std::getline(std::cin,name);
  }

  do{
    std::cout<<"\nEnter your Lucky number (Be it positive): ";
    std::cin>>lucky;
  }while(lucky<=0);
  return 0;
}