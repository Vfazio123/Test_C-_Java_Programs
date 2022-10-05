#include <iostream>
#include <string>


//Since we are using pointers (call by reference) we will see the same output in the func as in main (after func call)
//because the pointers are reference address where the values are stored. and since we changed the ref address the vars
//in main will change to. (as if they are being redeclared in main after func call with new stuff (stuff that occured in
//func.

using namespace std;

void func (int &Iptr, int &Iptr2, string &Sptr, string &Sptr2){
   string c = " Stay Awhile";

   Iptr += 5;
   Iptr2 += 5;
   Sptr += Sptr2;
   Sptr2 += c;   

   cout << "In func: " << "num = " << Iptr << endl;
   cout << "In func: " << "num2 = " << Iptr2 << endl;
   cout << "In func: " << "a = " << Sptr << endl;
   cout << "In func: " << "b = " << Sptr2 << endl;
}

int main(){
   int num = 10;
   int num2 = -10;
   string a = "Hello";
   string b = "Goodbye";
   
   cout << "Before Func: " << "num = " << num << endl;
   cout << "Before Func: " << "num2 = " << num2 << endl;
   cout << "Before Func: " << "a = " << a << endl;
   cout << "Before Func: " << "b = " << b << endl << endl;
   
   func(num, num2, a, b);
   cout << endl;
   cout << "After Func: " << "num = " << num << endl;
   cout << "After Func: " << "num2 = " << num2 << endl;
   cout << "After Func: " << "a = " << a << endl;
   cout << "After Func: " << "b = " << b << endl;
   cout << endl;
return 0;
}
