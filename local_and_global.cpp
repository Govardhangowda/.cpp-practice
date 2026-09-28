#include<iostream>

void demo();

int var =3;
int main(){
  int var =1;
  std::cout<<var<<" This is Local\n";
  std::cout<<::var<<" This is Global\n";
  demo();
  return 0;
}

void demo(){
  int var=2;
  std::cout<<::var<<"This is global\n";
  std::cout<<var<<" This is local";
}