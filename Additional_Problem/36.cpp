#include <iostream>
#include <string>
using namespace std;

string reverseRecursion(string str){
   if (str.length() == 1) {
   return str;
   }else{
return reverseRecursion(str.substr(1,str.length())) + str.at(0);
}
}

int main()
{
string str;
cout<<"Enter the string to reverse : ";
getline(cin, str);

cout<<"The reversed string is : "<<reverseRecursion(str);
return 0;
}


