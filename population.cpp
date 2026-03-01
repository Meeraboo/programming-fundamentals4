#include<iostream>
using namespace std;
main(){
cout<<"Enter current population of world : ";
int current_population;
cin>>current_population;
cout<<"Enter the monthly birth rate ( number of births per month): ";
int birth_rate;
cin>>birth_rate;
int population_in_3decades= current_population * birth_rate *36;
cout<<"Population in three decades will be: "<<population_in_3decades;}