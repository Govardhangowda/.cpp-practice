#include<iostream>
int main(){
  std::string cars[4];
  cars[0]="Toyota Supra";
  cars[1]="Nissan GT-R";
  cars[2]="Lexus LFA";
  cars[3]="Mitsubuishi Evo";

  std::string Eurocars[4];
  Eurocars[0]="Porsche 911";
  Eurocars[1]="AMG GT-63";
  Eurocars[2]="Ferarri LaFerarri";
  Eurocars[3]="Mclaren p1";

  int i=0;
  do
  {
    std::cout<<cars[i]<<"\n";
    i++;
  } while (i<sizeof(cars)/sizeof(cars[0]));

 for(std::string car:Eurocars){
    std::cout<<car<<"\n";
  }
  
  return 0;
}