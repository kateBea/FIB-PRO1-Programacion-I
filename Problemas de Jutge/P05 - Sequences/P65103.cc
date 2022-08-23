// P65103   I-TH (3)

#include <iostream>
using namespace std;

int main() {
   int i;
   int x, InputValue = 0, Xi = 0, valor = 0;
   
   cin >> i;

   while (cin >> x) {
      ++InputValue;
      ++Xi;

      if (Xi == i) 
         valor = x;
   }
   if ((i > InputValue) or (i <= 0)) 
      cout << "Incorrect position." << endl;
   else 
      cout << "At the position " << i << " there is a(n) " << valor << "." << endl;


   return 0;
}


