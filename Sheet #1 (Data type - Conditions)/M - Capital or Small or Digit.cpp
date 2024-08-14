#include <iostream>
#include <cmath>
using namespace std ;
int main ()
 { 
  char mych;
  cin>> mych;
  if(mych>=97 && mych<=122){
    cout << "ALPHA"<<endl;
    cout << "IS SMALL";
  }else if(mych>=65 && mych<=90){
    cout << "ALPHA"<<endl;
    cout << "IS CAPITAL";
  }else {cout <<"IS DIGIT";}
}
