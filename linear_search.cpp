#include<iostream>
int search(std::string menu[], int size, std::string name);
int main(void){
  std::string name;
  std::string menu[]={"Chitranna","Mosaranna","Bisebelebath","Puliyogre","Gheerice"};
  std::cout<<"What do you want today?: ";
  std::getline(std::cin,name);
  int size= sizeof(name)/sizeof(name[0]);
  int index=search(menu,size,name);
  if(index != -1){
    std::cout<<"\nYour Food item "<<name<<" is "<<index<<"th on the list ";
  }else{
    std::cout<<"\n"<<name<<" is not in the list!";
  }
  return 0;
}
int search(std::string menu[], int size, std::string name){
  for (int i=0;i<size;i++){
    if(name == menu[i]){
      return i+1;
    }
  }
  return -1;
}