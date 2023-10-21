#include <iostream>
#include "student.h"
#include "student.cpp"
using namespace std;

class Tester{
   
   int main(){
   
   student s1();
   s1.display();
   
   student s2(22,"sameer");
   s2.display();
   return 0;  
}
};
