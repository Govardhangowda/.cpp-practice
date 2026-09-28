#include<iostream>
float  area(float length);
float volume(float length);

int main(){
  float length;
  std::cout<<"Enter The length of the cube: ";
  std::cin>>length;
  std::cout<<"The surface area of cube is: "<< area(length)*6<<std::endl;
  std::cout<<"The Volume of the cube is: "<< volume(length)<<std::endl;
  return 0;
}

float area(float length){
  return length*length;
}

float volume(float length){
  return (length*length)*length;
}