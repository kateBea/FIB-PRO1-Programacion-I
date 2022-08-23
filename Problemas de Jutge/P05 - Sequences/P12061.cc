// P12061   WORDS BETWEE TWO WORDS

#include <iostream>
using namespace std;

int main () {
	string sequence;
   bool beg;
   int c;

   beg = false;
   c = 0;

   while (cin >> sequence) { 
      if (sequence == "end") { 
         if (beg) 
            cout << c << endl; 
         else 
            cout << "wrong sequence" << endl; 

         return 0;
      }

      if (beg) 
         c++; 
      if (sequence == "beginning") 
         beg = true; 
   }

   cout << "wrong sequence" << endl;

   return 0;
}


