#include <iostream>

namespace first{
  int x=1;
}

namespace second{
  int x=2;
}

int main(){
  using std::cout;
  int x=0;
  cout <<"the value of x is:"<<x<<"\n";

  using namespace first;
  cout <<"the value of x is:"<<x<<"\n";

  using namespace second;
  cout <<"the value of x is:"<<x<<"\n";

  return 0;
  
}