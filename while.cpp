#include <iostream>
using namespace std;
main(){
int number;
cout<<" Enter a 4 digit number: ";
cin>>number;
 
while ( number < 1000 || number >9999)
{ cout<<" invalid input"<<endl;
cin>>number;}
cout<< " valid number "<< number<<endl;}