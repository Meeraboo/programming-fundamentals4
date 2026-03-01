#include<iostream>
using namespace std;
main(){
cout<<"what is your name ? ";
string name;
cin>>name;
cout<<"enter matric marks (out of 1100): ";
int matric_marks;
cin>>matric_marks;
cout<<"enter fsc marks (out of 555): ";
int fsc_marks;
cin>>fsc_marks;
cout<<"enter ECAT marks  (out of 400):";
int ecat_marks;
cin>>ecat_marks;
double aggregate= (ecat_marks/400)*50 + (fsc_marks/555)*40 + (matric_marks/1100)*10;
cout<<" ecat aggregate of "<<name<<" is "<<aggregate;}


