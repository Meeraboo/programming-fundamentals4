#include<iostream>
using namespace std;
main(){

float veg_price_kg;
float fruit_price_kg;
int totalkg_veg;
int totalkg_fruit;

cout<<"vegetable price per kg: ";
cin>>veg_price_kg;

cout<<"fruits price per kg: ";
cin>>totalkg_fruit;

cout<<"total kilograms of vegetables: ";
cin>>totalkg_veg;

cout<<"total kilograms of fruits: ";
cin>>totalkg_fruit;

int totalprice= (totalkg_veg * veg_price_kg )+ (totalkg_fruit * fruit_price_kg);

float in_rps = totalprice * 1.94;
cout<<"Total earnings of harvest in rupees: "<<in_rps;
}