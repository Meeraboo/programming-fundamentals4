#include<iostream>
using namespace std;
main(){
int i;
int p;
cout<<"Enter the imposter count: ";
cin>>i;
cout<<"Enter the player count: ";
cin>>p;
int chances= 100 * (i/p);
cout<<"chances for being the imposter are "<<chances<<" % ";}