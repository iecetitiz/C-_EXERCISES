#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

union student {
int age;
char ch;

};


int main()
{

   // cout << sizeof(union student) << endl;
   // union student s;

    //s.ch = 'a';
    //cout << s.age << endl;
    //cout << s.ch << endl;
    int static static_array[7];


    cout << sizeof(static_array) << endl;
   //int * fixed_heap_dynamic_array = malloc(7 * sizeof(int));
    //cout << sizeof(*fhda) << endl;

    int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};
 cout << x[2] << endl;

    return 0;
}
