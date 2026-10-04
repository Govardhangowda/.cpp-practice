#include<iostream>
void swap( std::string &A, std::string &B);
int main(){
  std::string A="Apple";
  std::string B="Banana";
  std::cout<<"A for: "<<A<<"\n";
  std::cout<<"B for: "<<B<<"\n";
  swap(  A,  B);
  std::cout<<"A for: "<<A<<"\n";
  std::cout<<"B for: "<<B<<"\n";
  return 0;
}

void swap( std::string &A, std::string &B){
  std::string temp= A;
  A=B;
  B=temp;
}
