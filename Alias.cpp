#include <iostream>

using namespace std;

int main(){

   int num = 20;
   int temp = num;
   int *Iptr = &num;
   
   temp++;
   cout << "Int (temp) pointer: " << *Iptr << endl;
   num++;
   cout << "Int (num) pointer: " << *Iptr << endl;
return 0;
}
