#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "enter the size please:" << endl;
    cin>>size;
    //int myArray[size];
    int* myArray = new int[size];
    for(int i=0; i< size; i++) {
        cin>>myArray[i];
    }

    for(int i=0; i< size; i++) {
        cout << myArray[i] << " ";
    }

    delete[]myArray;
    myArray = NULL;
    return 0;
}
