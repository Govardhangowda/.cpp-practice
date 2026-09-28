#include<iostream>

int main(){
  float balance=0,deposit,withdrawl;
  int choice;
  
  
  
  do{
    std::cout<<"Welcome to ABC bank\nPress 1 for viewing Balance\nPress 2 for Amount Deposit\nPress 3 for Amount Withdrawl\nPress 4 to quit :";
    std::cin>>choice;
    std::cin.clear();
    fflush(stdin);
    
    switch (choice)
    
    {
    case 1:
      std::cout<<"\nYour Account Balance is: "<<balance<<"Rs\n";
      break;
    case 2:
      std::cout<<"Enter The amount To be deposited: ";
      std::cin>>deposit;
      if(deposit>=0){
        balance+=deposit;
      }else{
        std::cout<<"\nEnter a valid Amount!\n";
      }
      break;
    case 3:
      std::cout<<"\nEnter The amount to be withdrawn: ";
      std::cin>>withdrawl;
      if (withdrawl<=balance){
        if(withdrawl>=0){
          balance-=deposit;
        }else{
          std::cout<<"\nEnter a positive amount!\n";
        } 
      }else{
        std::cout<<"\ninsufficient balance!\n";
      }
      break;
    default:
      break;
    }
  }while(choice!=4);
  std::cout<<"\nThanks for using our service, Come Again\n";

  return 0;
}