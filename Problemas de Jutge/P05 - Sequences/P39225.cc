// P39225   I-TH (1)

#include <iostream>
using namespace std;

int main() {
   int i;
   int x, Xi = 0, valor = 0;

   cin >> i >> x;

   while (x != -1) {
      if (Xi == (i - 1)) {
         valor = x;
      }

      ++Xi;

      cin >> x;
   }
   cout << "At the position " << i;
   cout << " there is a(n) " << valor << "." << endl;

   return 0;
}


