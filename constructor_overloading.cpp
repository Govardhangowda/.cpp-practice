#include<iostream>
class pizza{
  public:
  std::string topping1;
  std::string topping2;

  pizza(){
    std::cout<<"Your pizza has no toppings\n";
  };
  pizza(std::string topping1){
    this->topping1;
    std::cout<<"Your pizza has "<<topping1<<" as topping"<<"\n";
  }
  pizza(std::string topping1,std::string topping2){
    this->topping1;
    this->topping2;
    std::cout<<"Your pizza has "<<topping1<<"and"<<topping2<<" as topping"<<"\n";
  }
  
};
int main(){
  pizza pizza1;
  pizza pizza2("macoroni");
  pizza pizza3("pepporoni","cheese");

  return 0;
}