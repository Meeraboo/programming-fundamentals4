#include<iostream>
using namespace std;


main()
{
    int fertilizerbagweight;
    int cost_of_the_bag;
    int areabagcancover;

cout<<"weight of the fertilizer bag: ";
cin>>fertilizerbagweight;

cout<<"what is the cost price of the bag: ";
cin>>cost_of_the_bag;

cout<<"what is the area bag can cover: ";
cin>>areabagcancover;

int priceforeachpound = cost_of_the_bag/fertilizerbagweight;

cout<<" price for each pound of fertilzer is"<<priceforeachpound;

int weight_for_one_sqft=fertilizerbagweight/areabagcancover;

int costfor1sqft = weight_for_one_sqft * priceforeachpound;

cout<<"cost of using the fertilizer for each sqft is "<<costfor1sqft;}
