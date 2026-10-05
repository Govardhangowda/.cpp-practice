#include<iostream>
int main(){
  int age= 1;
  std::string name="someone";
  int *page=&age;
  std::string *pname=&name;
  std::string carcollection[]={"Maserati","Ferarri","Mclaren","maercedes","Pagani"};
  int *pprice =nullptr;
  int price=22000;
  pprice = &price;
  if(pprice==nullptr){
    std::cout<<"Price not determined yet! "<<"\n";
  }else {
    std::cout<<"The price of the car is: "<<*pprice<<"\n";
  }
  std::cout<<*pname<<" Is stored at adress: "<<pname<<" \n";
  std::cout<<*page<<" Is stored at adress: "<<page<<" \n";
  std::cout<<*carcollection<<" Is stored at: "<<carcollection<<" \n";
  return 0;

}