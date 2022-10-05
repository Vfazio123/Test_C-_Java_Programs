#include <iostream>
using namespace std; 

//This is telling me that in C++ large entities are passed by reference

void func(int arr[]){
   for(int i = 0; i<3; i++){
      arr[i] += 1;  
      cout << "In func: " << "arr["<<i<<"] is " << arr[i] << endl;
   }
}

int main(){
   int arr[] = {0,1,2};
   
   for(int i = 0; i<3; i++){
      cout << "Before Func: " << "arr["<<i<<"] is " << arr[i] << endl;
   }
   
   func(arr); 

   for(int i = 0; i<3; i++){
      cout << "After Func: " << "arr["<<i<<"] is " << arr[i] << endl;
   }

return 0;
}
