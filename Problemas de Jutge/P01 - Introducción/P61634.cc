// P61634   LEAP YEARS

#include<iostream>
using namespace std;

int main() { 
   int year;

   cin >> year;

   if (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)) {
      cout << "YES" << endl;
   }
   else {
      cout << "NO" << endl;
   }
   
   return 0; 
}