#include <iostream>

using namespace std;

void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
}

void printChar(char* charPtr) {
    cout << *charPtr << endl;
}

void print(void* ptr, char type) {
    switch(type) {
    case 'i': cout << (*(int*)ptr)<< endl;break;
    case 'c': cout << (*(char*)ptr)<< endl;break;
    }
}

int main()
{

    int n = 5;
    cout << &n << endl; //address of variable n
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;  //Dereferencing is used to access or manipulate data contained in memory location pointed to by a pointer.
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;


    int* ptr2;
    cout << "ptr2 " << ptr2 << endl;

     int* ptr3;
    cout << "ptr3 " << ptr3 << endl;

    cout << "____________________________________"<< endl;

    int number = 100;
    printNumber(&number);

    char letter = 'a';
    printChar(&letter);

    print(&number, 'i');
    return 0;
}
