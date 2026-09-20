#include<iostream>

int main(){
  double age;
  std::cout<<"what is you age?: ";
  std::cin>>age;
  std::cout<<"\n";

  if(age>=18 && age <=100){
    std::cout<<"Welcome to the site!";
  }else if (age <=0){
    std::cout<<"You are not born yet!";
  }else if(age>=100){
    std::cout<<"You are too old to visit this site! ";
  }else{
    std::cout<<"you are not allowed to the site!";
  }
  return 0;
}