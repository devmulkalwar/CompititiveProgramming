#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string : ";
   cin>>str;

   for(int i=0; i<str.length();i++){
       if(int (str[i])>=97 && int(str[i])<=122){
           continue;
       }
       else{
          int temp = int(str[i]) + 32;
          str[i] = char(temp);
       }
   }
   cout<< str;
    return 0;
}