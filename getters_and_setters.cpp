#include<iostream>
class car{
    private:
    std::string model;
    int topspeed=210;
    public:
    car(std::string model,int topspeed){
      this->model=model;
      this->topspeed=topspeed;
    }
    int top_speed(){
      return topspeed;
    }
    void mod_speed(int change){
      this->topspeed=change;
    }
  };
int main(){
  
  car car1("Toyota Corolla",200);
  std::cout<<"The current top speed is:"<<car1.top_speed()<<" km/h \n";
  int changed;
  std::cout<<"To which speed do you want to change the car speed to:(Enter in km/h) ";
  std::cin>>changed;
  car1.mod_speed(changed);
  std::cout<<"\nThe speed is now: "<<car1.top_speed();
  return 0;
}