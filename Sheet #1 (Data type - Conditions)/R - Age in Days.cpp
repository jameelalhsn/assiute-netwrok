#include <iostream>
#include <array>
#include <cmath>
using namespace std ;
int main(){
int day ;
cin >> day ;
int year=day/365;
day -=365*year ;
int mon =day/30;
day -=30*mon;
cout <<year <<" years"<<endl;
cout <<mon <<" months"<<endl;
cout <<day <<" days";
 }
