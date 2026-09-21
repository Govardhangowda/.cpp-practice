#include<iostream>
int main(){
  double temp;
  std::string weather;
  std::cout<<"Hi bro how is the Weather today?(sunny/cloudy/rainy):  ";
  std::cin>>weather;
  std::cout<<"\nBro what is the temperature?(enter in celsius): ";
  std::cin>>temp;

  if((temp>=20 && temp<=30) || weather=="cloudy"){
    std::cout<<"\nThe weather is comfortable! ";
  }else if(temp<20 || weather=="rainy" ){
    std::cout<<"\n Make sure you are warm";
  }else{
    std::cout<<"\nQuite a hot day Stay indoors!";
  }
  
  return 0;
}