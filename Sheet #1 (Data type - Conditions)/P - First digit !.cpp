#include <iostream>
#include <array>
#include <cmath>
using namespace std ;
 
int main()
 {
int num ; 
cin >> num ;
int res = num /1000;
if(res %2 ==0){
     cout<<"EVEN";
}else {cout <<"ODD";}
return 0 ;
 }
