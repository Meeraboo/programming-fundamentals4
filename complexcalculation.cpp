#include<iostream>
using namespace std;
main(){
int number[15];
for(int i = 0 ;i <15 ; i++)
{cin>> number[i];
}
int sum =   number[1] + number[2] + number[3] +number[4];
int multiply = number[5] * number[6] * number[7] * number[8] * number[9];
int subtracts= number[10] - number[11] - number[12] - number[13] - number[14] - number[15];
int result1 = sum + multiply;
int result= result1 - subtracts;
cout<<"the result is: "<<result;}

