#include<iostream>
using namespace std;
main(){
int paint;
int width;
int height;
cout<<"Enter paint area: ";
cin>>paint;
cout<<"Enter width: ";
cin>>width;
cout<<"Enter height: ";
cin>>height;
int walls_painted= paint/ (width * height);
cout<<"WAlls painted"<<walls_painted;}
