#include<iostream>

using namespace std;

main()
{
string movie_name;

float adult_ticket;

float child_ticket;

int at_tkt_sld;

int cd_tkt_sld;

float total_mny_charity;

cout<<"what is the name of the movie? ";
cin>>movie_name;

cout<<"Price of agult ticket? ";
cin>>adult_ticket;

cout<<"price of child ticket? ";
cin>>child_ticket;

cout<<"number of adult tickets sold? ";
cin>>at_tkt_sld;

cout<<"number of child tickets sold? ";
cin>>cd_tkt_sld;

cout<<"percentage  to donate to charity: ";
cin>>total_mny_charity;

float total_earned = (adult_ticket*at_tkt_sld) + (child_ticket * cd_tkt_sld);

float mny_remaining = total_earned - total_mny_charity;
cout<<"remaining money after charity: "<<mny_remaining;
}

 

