#include<iostream>
using namespace std;
main(){
int minutes;
int fps;
cout<<"Number of minutes: ";
cin>>minutes;
cout<<"Frames per second: ";
cin>>fps;
int seconds = minutes * 60;
int total_number = fps * seconds;
cout<<"total number of frames are "<<total_number;}