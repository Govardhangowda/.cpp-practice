#include<iostream>
int main(void){
  struct student{
    std::string name;
    double cgpa;
    std::string phone_number;
    std::string address;
    bool enrolled;
  };
  student student1;
  student1.name ="Govardhan";
  student1.cgpa=9.5;
  student1.phone_number="+911234567890";
  student1.address="123 street, 4 cross, Banglore";
  student1.enrolled=true;

  student student2{"ABC",10.0,"+910987654321","789 street, 5 cross, Banglore",false};

  std::cout<<student1.name<<"\n";
  std::cout<<student1.cgpa<<"\n";
   std::cout<<student1.phone_number<<"\n";
 std::cout<<student1.address<<"\n";
 std::cout<<student1.enrolled<<"\n";

 std::cout<<student2.name<<"\n";
  std::cout<<student2.cgpa<<"\n";
   std::cout<<student2.phone_number<<"\n";
 std::cout<<student2.address<<"\n";
 std::cout<<student2.enrolled<<"\n";


  return 0;
}