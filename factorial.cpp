#include<iostream>

using namespace std;

int factorial(int i){
  if(i>0){
    return i*factorial(i-1);//recursion
  }
  return 1;
}
int  main(){
int n;
cout<<"Input a number: ";cin>>n;
cout<<"Factorial of "<<n<<"! = "<<factorial(n)<<endl;
  return 0;
}