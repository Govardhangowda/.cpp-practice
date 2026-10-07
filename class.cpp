#include<iostream>
class car{
    public:
    std::string brand="toyota";
    std::string model;
    int model_year=2018;
    double price=10000;

    car(std::string brand,std::string model,int x, double price){
      this->brand=brand;
      this->model=model;
      model_year=x;
      this->price=price;
    };

    void start(){
      std::cout<<"The car is now started\n";
    }
    void run(){
      std::cout<<"The car is running!\n";
    }
    void stop(){
      std::cout<<"The Car is stopped\n";
    }
    void details(){
      std::cout<<"\nThe car model is: "<<model;
      std::cout<<"\nThe Car Brand is: "<<brand;
      std::cout<<"\nThe model year is: "<<model_year;
      std::cout<<"\nThe price of the car is: "<<price<<"\n\n";
    }
  };
int main(){
  

  car car1("Toyota","Camry",2026,40000.00);
  car car2{"Tesla","Model-X",2024,54000};
  car1.details();
  car2.details();
  return 0;
} 