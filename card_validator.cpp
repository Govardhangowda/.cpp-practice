#include<iostream>
int evendigits(const std::string card);
int odddigits(const std::string card);
int digit(const int number);
int main(){
  std::string card;
  std::cout<<"Enter the credit card no: ";
  std::cin>>card;
  int totalsum= evendigits(card)+ odddigits(card);
  if (totalsum%10==0){
    std::cout<<"\nThe credit card is valid!";
  }else{
    std::cout<<"\nThe credit card is not valid!";
  }
  return 0;
}
int digit(const int number){
  return number%10 +(number/10 % 10);
}
int evendigits(const std::string card){
  int sum=0;
   for (int i=card.size()-2;i>=0;i-=2){
      sum+=digit((card[i]-'0')*2);
   }
   return sum;
}

int odddigits(const std::string card){
  int sum=0;
  for(int i=card.size()-1;i>=0;i-=2){
    sum+=(card[i]-'0');
  }
  return sum;
}
