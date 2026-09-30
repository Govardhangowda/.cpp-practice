#include<iostream>
void sort(int nums[],int size);
 int main(){
  int nums[]={2,6,1,9,8,5,4};
  int size=sizeof(nums)/sizeof(nums[0]);
  std::cout<<"Before: ";
  for(int num:nums){
    std::cout<<num<<" , ";
  }
  
  sort(nums, size);
  std::cout<<"\nAfter: ";
  for(int num:nums){
    std::cout<<num<<" , ";
  }
  return 0;

 }

 void sort(int nums[],int size){
  int temp;
  for (int i=0;i<size-1;i++){
    for(int j=0;j<size-i-i;j++){
      if(nums[j]>nums[j+1]){
        temp=nums[j];
        nums[j]=nums[j+1];
        nums[j+1]=temp;
      }
    }
  }
 }
