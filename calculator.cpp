#include<iostream>
int main(){
  double num1,num2,result;
  char ope;
  std::cout<<"Welcome to console calculator\n";
  std::cout<<"Enter any of the following operators :(+,-,*,/): ";
  std::cin>>ope;
  std::cout<<"\n";

  std::cout<<"Enter the first value: ";
  std::cin>>num1;

  std::cout<<"Enter the second value: ";
  std::cin>>num2;

  switch(ope){
    case '+':
      result=num1+num2;
      std::cout<<"The result of addition is: "<<result;
      break;

    case '-':
      result=num1-num2;
      std::cout<<"The result of subtraction is: "<<result;
      break;

    case '*':
      result=num1*num2;
      std::cout<<"The result of multiplication is: "<<result;
      break;

    case '/':
      result=num1/num2;
      std::cout<<"The result of division is: "<<result;
      break;

    default:
      std::cout<<"Enter valid mathematical operators! ";
      break;
    

  }


  return 0;

}