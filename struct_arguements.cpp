#include <iostream>
#include <string>

struct car {
    std::string model;
    std::string brand;
    std::string paint;
    std::string wheels;
};

void display(car &car);
void paint(car &car);
void wheels(car &car);

int main() {
    car car1 = {"Laferarri", "Ferarri", "corsa red", "Alloy-cut"};
    display(car1);
    car car2 = {"AMG GT-63", "Mercedes-AMG", "Silver", "Carbon-Fibre"};
    display(car2);
    paint(car1);
    display(car1);
    wheels(car1);
    display(car1);
    paint(car2);
    display(car2);
    wheels(car2);
    display(car2);
    return 0;
}

void display(car &car) {
    std::cout << "The Model is: " << car.model << "\n";
    std::cout << "The Brand is: " << car.brand << "\n";
    std::cout << "The Paint Job is: " << car.paint << "\n";
    std::cout << "The Wheels are: " << car.wheels << "\n \n";

}

void paint(car &car) {
    std::string changecolor;
    std::cout << "To What color to change the Paintjob of your "<<car.model<<" to?:  ";
    std::getline(std::cin, changecolor);
    car.paint = changecolor;
}

void wheels(car &car) {
    std::string changewheel;
    std::cout << "To What color to change the Wheel of your "<<car.model<<" to?:  ";
    std::getline(std::cin, changewheel);
    car.wheels = changewheel;
}

