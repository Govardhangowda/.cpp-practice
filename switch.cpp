#include<iostream>
int main(){
  int a;
  std::cout<<"Enter 1, If you are Happy\nEnter 2, If You are Excited\nEnter 3, if you are sad\nEnter 4, if you are anxious: ";
  std::cin>>a;

  switch(a){
    case 1:
      std::cout<<"Let your Hapiness be forever";
      break;
    case 2:
      std::cout<<"Great Bro, Share your excitement with everybody";
      break;
    case 3:
      std::cout<<"Don't worry, Sad things don't last long";
      break;
    case 4:
      std::cout<<"Bro, Please Take a deep Breath and Relax";
      break;
      
    


  }

  return 0;
}