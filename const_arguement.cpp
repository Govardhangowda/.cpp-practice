#include<iostream>
void details(const std::string &name, const std::string &price);
int main(){
  std::string name="Tata Sierra";
  std::string price="30 Lakh INR";
  details(name, price);

  return 0;
}
void details(const std::string &name, const std::string &price){
  std::cout<<"The Model is: "<<name<<"\n";
  std::cout<<"The Price is: "<<price<<"\n";

}