#include<iostream>
#include<ctime>

int main(){
  srand(time(0));
  int n=(rand()%5 +1);
  switch(n){
    case 1: std::cout<<"You win an Iphone!\n";
    break;
    case 2:std::cout<<"You have won a duo!\n";
    break;
    case 3:std::cout<<"You have won a samsung fold!\n";
    break;
    case 4:std::cout<<"You have won a samsung trifold!\n";
    break;
    case 5:std::cout<<"You have won a macbook pro!\n";
    break;
    case 6:std::cout<<"You have won a mac studio!\n";
    break;
  }
  return 0;
}