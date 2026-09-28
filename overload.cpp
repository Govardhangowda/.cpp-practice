#include<iostream>
std::string pizza();
std::string pizza( std::string topping);
std::string pizza(std::string topping1, std::string topping2);
int main(){
  std::string macoroni="macoroni";
  std::string cheese="cheese";
  pizza();
  std::cout<<pizza();
  std::cout<<pizza( macoroni);
  std::cout<<pizza( cheese,macoroni);

  return 0;
}

std::string pizza(){
  return("Your Pizza is ready! \n");
}
std::string pizza(std::string topping1, std::string topping2){
  return("Your pizza with "+ topping1 +" and "+ topping2+"is ready\n");
}

std::string pizza(std::string topping){
  return("Your pizza with"+ topping +" is ready\n");
}


