#include <iostream>
using namespace std;
int func(int num) {
   int i;
   int flag = 1;
   for(i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
