#include<iostream>
using namespace std;
main(){
int number;
  cout<<"enter a 4 digit number: ";
cin>>number;
while( number < 1000 ||number > 9999)
{ 
cout<< "invalid input please enter a four digit number: ";
cin>>number;
}
cout<< "valid 4 digit number entered"<<number<<endl;
int digit1 = number % 10;
int number2nd = number / 10;

int digit2 = number2nd % 10;
int number3rd = number2nd / 10;

int digit3 = number3rd % 10;
int number4th =number3rd /10;

int sum = digit1 + digit2 + digit3 + number4th;
cout<<"the um of four digit number is: "<<sum;}