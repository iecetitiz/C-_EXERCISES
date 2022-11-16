#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

 struct k {
        char ch1;
        char ch2;
        char ch3;
        char ch4;
    } ;

union student {
int age;
struct k  name;

};

void foo (int a[],int size) {

}
int main()
{

   int x[10];
//   cout << sizeof(x) / 4 << endl;
foo(x, 10);
    cout << sizeof(union student) << endl;
    union student s;

s.name.ch1 = 'a';

s.name.ch2 = 'b';

s.name.ch3 = 'c';

s.name.ch4 = 'd';

cout << s.age << endl;
   // cout << s.ch << endl;




    return 0;
}
