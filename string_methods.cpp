#include<iostream>
int main(){
  std::string name;
  std::cout<<"Can I know your name? ";
  std::getline(std::cin,name);
  if(name.empty()){
    std::cout<<"Come On! Enter Your name: ";
  }else{
    std::cout<<"\nOh Your name starts with the letter: "<<name.at(0);
    std::cout<<"\nHello "<<name<<" Nice to meet you! ";
    std::cout<<"\n It's special that you have letter a at the  "<<name.find("a")<<" position of you name";
    std::cout<<"\nYour name is "<<name.length()<<" characters long";
    std::cout<<"\nMaybe your email is: "<<name.append("@gmail.com");
    std::cout<<"\nMaybe your username is: "<<name.insert(0,"@");
    std::cout<<"\nHow would it be if your username was this: "<<name.erase(5,8);
    
    

  }
  
  return 0;
}