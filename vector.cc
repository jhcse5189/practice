#include <iostream>
#include <vector>
#include <string>
#include "Vector.h"

using namespace std;

int main() {
   /*int n;
   cin >> n;
   int* arr = new int[n];
   cin >> arr[0] >> arr[1] >> arr[2];
   cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
   return 0;*/
   int n;
   cout << "몇 개의 숫자를 입력하실 건가요? " << endl;
   cin >> n;

   Vector v;
   v.setNum(n);
   v.getNum();
}
