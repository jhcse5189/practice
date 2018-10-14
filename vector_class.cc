#include <iostream>
#include <vector>
#include <string>
#include "Vector.h"

using namespace std;

//ostream& operator<<(ostream& output, const Vector& vector) {
//   for (int i = 0; i < vector.num; i++) {
//      output << vector.arr[i] << " ";
//   }
//   output << endl;
//   return output;
//}

Vector::~Vector() {
   delete[] arr;
}

Vector::Vector() {}

void Vector::setElement() {
   int temp = 0;
   cout << "원소를 입력하세요. " << endl;
   for (int i = 0; i < num; i++) {
      cin >> temp;
      arr[i] = temp;
   }
}

int Vector::getNum() {
   return num;
}

void Vector::getElement() {
   for (int i = 0; i < num; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int Vector::front() {
   return arr[0];
}

void Vector::push_back(int e) {
   new int[num + 1];
   arr[num + 1] = e;
}

void Vector::pop_back() {
   new int[num - 1];
}

void Vector::remove(int i) {
   
}

int Vector::back() {
   return arr[num - 1];
}

void Vector::insert(int i, int e) {
   int temp;
   new int[num + 1];
   for (int k = num; i >= i; k--) {
      arr[k + 1] = arr[k];
   }
   arr[i] = e;
}

void Vector::setNum(int n) {
   num = n;
}
