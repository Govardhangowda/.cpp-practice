#include<iostream>
int factorial(int number);
int main(){
  int number;
  std::cout<<"Which Factorial Do you need? ";
  std::cin>>number;
  
  std::cout<<"The factorial of "<<number<<" is: "<<factorial(number);
  return 0;
}
int factorial(int number){
  if(number>1){
    return number*factorial(number-1);
  }else{
    return 1;
  }
}