#include <iostream>
#include <vector>
#include <string>
#include "vector.h"

using namespace std;

int main() {
   /*int n;
   cin >> n;
   int* arr = new int[n];
   cin >> arr[0] >> arr[1] >> arr[2];
   cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
   return 0;*/
   int n;
   cout << "How many numbers do you input to? " << endl;
   cin >> n;

   Vector v;
   v.setNum(n);
   v.getNum();
}
