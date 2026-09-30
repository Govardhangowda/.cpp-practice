#include<iostream>
double bill(double prices[],int size);
int main(){
  double prices[]={20.22,32.34,34,56,79.34,67.78};
  int size=sizeof(prices)/sizeof(prices[0]);
  double totalbill=bill(prices,size);
  std::cout<<"The total bill of purchase is: "<<totalbill<<"\n";
}

double bill(double prices[],int size){
  double total=0;
  for(int i=0;i<size;i++){
    total+=prices[i];
  }
  return total;
}