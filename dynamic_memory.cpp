#include<iostream>
int main(){
  int *pclass= NULL;
  char* values=NULL;
  pclass =new(int);
  std::cout<<"What is the value you need to store: ";
  std::cin>>*pclass;
  std::cout<<"\nThe value "<<*pclass<<" is stored at the address: "<<pclass<<"\n";
  int size;
  std::cout<<"how many values do you need to store in an array?: ";
  std::cin>>size;
  std::cout<<"\n";
  values = new char[size];
  for (int i=0; i<size;i++){
    std::cout<<"Enter the value of element "<<i+1;
    std::cin>>values[i];
  }
  std::cout<<"the values of the element are: ";
  for (int i=0; i<size;i++){
    std::cout<<values[i]<<" ";
  }

  delete pclass;
  delete[] values;
  return 0;
}