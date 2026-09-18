#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string,std::string>> contact_s;
using name= std::string;
using number= int;

int main(){
  contact_s friends={
    {"Tim David","123-456"}
    
  };
  
  name frnd2="Phil Salt";
  number frnd2num=123789;

  std::cout <<friends[0].first<<" "<<friends[0].second<<"\n";
  std::cout<< frnd2<<" "<<frnd2num;
  return 0;
}