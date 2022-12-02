#include <iostream>

using namespace std;

void printNumber(int* pointer)
 {
     cout << *pointer << endl;
 }

 void printLetter(char* pointer) {
 cout << *pointer << endl;
 }

 void printSomething(void* ptr, char type) {
switch(type){
case 'i': cout << *(int*)ptr << endl;break;
case 'c': cout << *(char*)ptr << endl;break;
}
 }

void increment_with_reference(int* x) {
cout << x<< endl;
x++;
cout << x<< endl;
}


int main()
{
    int number = 20;

    cout << "number:" << number << endl;
    int* ptr = &number;
    *ptr = 15;
    cout << "number after ptr:" << number << endl;
    int* pointer = &number;

    *pointer = 22;
    cout << "number after pointer:" << number << endl;

    cout << "printNumber() method:"<< endl;
    printNumber(pointer);
    printNumber(&number);

   cout << "printLetter() method:"<< endl;
   char letter = 'b';
   char * ptrLetter = &letter;
   printLetter(ptrLetter);
   printLetter(&letter);

   cout << "printSomething() method:"<< endl;
   printSomething(ptrLetter, 'c');
   printSomething(pointer, 'i');
 cout << "increment_with_reference() method:"<< endl;
 int mynumber= 777;
 increment_with_reference(&mynumber);
 cout << "after increment_eoth_reference() method mynumber is:"<< mynumber<< endl;
    return 0;
}
