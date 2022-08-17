#include <iostream>

using namespace std;

int main()
{
   int A, B, C, D, aux;

   cin >> A;
   cin >> B;
   cin >> C;
   cin >> D;

   // A<=B B<=C

   /// A  B  C
   /// 7  5  4
   ///  5  7
   //      4   7

   if (A > B)
   {
      aux = A;
      A = B;
      B = aux;
   }

   if (B > C)
   {
      aux = B;
      B = C;
      C = aux;
   }
   if (C > D)
   {
      aux = C;
      C = D;
      D = aux;
   }

   if (A > B)
   {
      aux = A;
      A = B;
      B = aux;
   }

   if (B > C)
   {
      aux = B;
      B = C;
      C = aux;
   }

   if (A > B)
   {
      aux = A;
      A = B;
      B = aux;
   }
   cout << A << " " << B << " " << C << " " << D << endl;

   return 0;
}
