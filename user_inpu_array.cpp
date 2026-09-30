#include<iostream>
int main(){
  int size =5;
  std::string temp;
  std::string foods[size];
  for(int i=1;i<size+1;i++){
    std::cout<<"What You eat for today? "<<i<<"st item (Enter'q' to quit): ";
    std::getline(std::cin,temp);
    if(temp =="q"){
      break;
    }else{
      foods[i]=temp;
    }
  }
  std::cout<<"You ate the following food: \n";
  for(int j=1; !(foods[j]=="");j++){
    std::cout<<foods[j]<<"\n";
  }
  return 0;
}