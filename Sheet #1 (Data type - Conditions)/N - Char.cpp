#include <iostream>
#include <array>
#include <cmath>
using namespace std ;
int main(){
char world;
cin >>world;
if(int(world)>90)
{
     cout <<char(world-32);
}else {cout << char(world+32);}
}
