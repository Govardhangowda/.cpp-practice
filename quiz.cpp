#include<iostream>
int main(){
  std::string question[]={"What is the no. of hours in a day?\n","What is the no of days in a week?\n","What is the no of months in a year?\n","What is the no of years in a decade?\n"};

  std::string options[][4]={{"A.23","B.24","C.20","D.18"},
  {"A.7","B.4","C.3","D.8"},{"A.23","B.10","C.18","D.12"},{"A.5","B.100","C.10","D.9"}};

  char answers[]={'B','A','D','C'};
  

  int size=sizeof(question)/sizeof(question[0]);
  char guess;
  int score=0;

  for (int i=0; i<size;i++){
    std::cout<<question[i];
    for(int j=0; j<sizeof(options[i])/sizeof(options[i][0]);j++) {
      std::cout<<options[i][j]<<"\n";
    }
    std::cin>>guess;
    guess=toupper(guess);
    if ( guess == answers[i]){
      std::cout<<"Correct\n";
      score++;
    }else{
      std::cout<<"It's Wrong Answer \n";
      std::cout<<"The correct answer is: "<<answers[i]<<"\n";
    }
    
  }
  double percent=(score/(double)size)*100;
  std::cout<<"The total score is: "<<score<<"\n";
  std::cout<<"The total no of questions was: "<<size<<"\n";
  std::cout<<"The percent was: "<<percent<<"\n";
  return 0;
}