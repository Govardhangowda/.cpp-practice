#include<iostream>
int main(){
  int h;
  char c;
  std::cout<<"Enter the height of the figure: ";
  std::cin>>h;
  std::cout<<"Enter the char ";
  std::cin>>c;

  for(int i=0;i<h;i++){
    for(int j=0;j<=i;j++){
      std::cout<<c;
    }
    std::cout<<"\n";
  }
  return 0;
}