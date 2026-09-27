#include<iostream>
int main(){
  int guess,tries=0,num;
  srand(time(0));
  num= (rand()%100+1);
  do{
   
    std::cout<<"Guess a number between 1 to 100: ";
    std::cin>>guess;
    tries++;
    if(guess>num){
      std::cout<<"\n Your Guess is high\n ";
    }
    if(guess<num){
      std::cout<<" Your Guess is low\n ";
    }
  }while(guess!=num);
  std::cout<<"You Got the number\n";
  std::cout<<"your no of tries is: "<<tries;
  return 0;
}