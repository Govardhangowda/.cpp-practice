#include<iostream>
class animals{
  public:
  bool alive;
  animals(bool alive){
    this->alive=alive;
  }
  void eat(){
    std::cout<<"The Animal is eating\n";
  }
};

class Dog: public animals{
  public:
  void bark(){
    std::cout<<"The Dog goes woo! ";
  }
};
class cat: public animals{
  public:
  void meow(){
    std::cout<<"The cat goes meow! ";
  }
};

int main(){
  Dog mydog(true);
  std::cout<<"Is my dog alive? "<<mydog.alive<<" \n";
  std::cout<<"Does my dog bark? ";
  mydog.bark();
  std::cout<<" \n";

  cat mycat(true);
  std::cout<<"Is my cat alive? "<<mycat.alive<<" \n";
  std::cout<<"Does my cat meow? ";
  mycat.meow();
  std::cout<<" \n";

  return 0;
}