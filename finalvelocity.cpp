#include<iostream>
using namespace std;
main(){
int initial_velocity;
int acceleration;
int time;
cout<<"Initial_velocity (m/s): ";
cin>>initial_velocity;
cout<<" Acceleration: ";
cin>>acceleration;
cout<<"Time: ";
cin>>time;
int final_velocity = (acceleration * time) + initial_velocity;
cout<<"initial_velocity is"<<final_velocity;}