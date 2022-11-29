#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int age = 43;
    int *ptr = &age;
    int j = *ptr;
    cout << *ptr << endl;
    cout << j << endl;

    cout << "dangling" << endl;

    int weight = 60;
    int *ptrW = &weight;
    int *ptrD;
    ptrD = ptrW;



    return 0;
}
