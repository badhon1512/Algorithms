#include<iostream>
#include<sstream>
using namespace std;
main(){
   int decimal ;
   cout<<"Hey zisan and nila please input a decimal number :";
   cin>>decimal;
   stringstream my_ss;
   my_ss << hex << decimal;
   string res = my_ss.str();
   cout << "The hexadecimal value of 61 is: " << res;
}
