#include<iostream>
int main(){
  std::string hunger;
  bool hungry;
  std::cout<<"Hey bro!, Do you want a pizza(y/n)";
  std::cin>>hunger;

  hunger=="y"? hungry=true : hungry=false;
  std::cout<<( hungry? "will be delivered in 10 minutes":"let's look for next time");
  return 0;
}