#include<iostream>
using namespace std;
main(){
cout<<"Enter the size of megabytes (MB): ";
int megabyte;
cin>>megabyte;
int KB= megabyte * 1024;
int byte = KB * 1024;
int bits =byte * 8 ;
cout<<megabyte<<"is equvalent to"<<byte<<"+"<<bits;}