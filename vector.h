#pragma once

#include <iostream>
#include <vector>
class Vector {
//   friend std::ostream& operator<<(std::ostream&, const Vector&);
private:
   int num;
   int* arr = new int[num];

public:
   Vector();
   ~Vector();
   void setElement();
   void push_back(int e);
   void pop_back();
   int front();
   int back();
   void remove(int i);
   void insert(int i, int e);
   int getNum();
   void getElement();
   void setNum(int n);
};
