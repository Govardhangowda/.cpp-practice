#include<iostream>
int main(){
  int a=0,b=0,c=0;
  std::cout<<"Gimme the start of the countdown: ";
  std::cin>>a;
  std::cout<<"\nGimme the point where you want to stop: ";
  std::cin>>b;
  std::cout<<"\nGimme the point you wanna skip: ";
  std::cin>>c;
  for(int j=a;j>1;j--){
    if (j==b){
      break;
    }
    if(j==c){
      continue;
    }
    std::cout<<j<<"\n";
  }
  
  return 0;
}