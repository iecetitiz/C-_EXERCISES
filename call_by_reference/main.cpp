#include <iostream>

using namespace std;
void swap(int a, int b) {
int temp = a;
a = b;
b = temp;
cout << "a:" << a << " b:" << b << endl;
}

void swap_reference(int &a, int &b) {
int temp = a;
a = b;
b = temp;
cout << "a:" << a << " b:" << b << endl;
}

int main()
{
    int a = 10;
    int b = 20;
    swap_reference(a, b);
    cout << "a:" << a << " b:" << b << endl;

    return 0;
}
