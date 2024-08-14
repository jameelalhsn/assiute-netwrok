#include <iostream>
#include <array>
#include <cmath>
using namespace std ;
int main(){
int num1 , num2 ;
char op;
cin >> num1 >> op >>num2;
if (int (op)==42){// *
cout <<num1*num2;
}else if (int (op)==43){// +
cout <<num1+num2;
}else if (int (op)==47){// /
cout <<num1/num2;
}else if (int (op)==45){// -
cout <<num1-num2;
}
 }
