#include <iostream>

using namespace std;
main(){
int number;
cout<<"enter a four digit number: ";
cin>>number;

while( number  <  1000 ||number >  9999);

{ cout<<"invalid input,try again: ";
cin>>number;}

 cout<<"valid four digit number entered "<<number<<endl;
int digit1 = number % 10;
int number2 = number / 10;

int digit2 = number2 % 10;
int number3 = number2 /10;

int digit3 = number3 %10;
int digit4 = number3 /10;

int sum = digit1 + digit2 + digit3 + digit4 ;
cout<<"The sum of the 4 digit number is here: "<<sum;}



