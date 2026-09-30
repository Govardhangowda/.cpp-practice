#include<iostream>

int main(void){
    
    const int size= 24;
    std::string food_order[size];
    std::cout<<"The food order is as follows: \n";

    fill(food_order, food_order+(size)/4,"Idli");
    fill(food_order+(size)/4, food_order+((size)/4)*2,"Dosa");
    fill(food_order+((size)/4)*2, food_order+((size)/4)*3,"Dosa");
    fill(food_order+((size)/4)*3, food_order+((size)/4)*4,"Dosa");

    for (std::string food:food_order){
      std::cout<<food<<"\n";
    }

    return 0;
}