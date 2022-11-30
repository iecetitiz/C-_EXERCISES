#include <iostream>

using namespace std;

int main()
{
    int number = 5;
    cout << number << endl;
    int luckyNumbers[5] = {2, 3, 5, 7, 9};
    cout << luckyNumbers << endl; //what is this address
    cout << &luckyNumbers[0] << endl; //wow
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers+2) << endl;

    int lovelyNumbers[5];
    for(int i = 0; i<=4; i++) {
        cout << "enter a number";
        cin>>lovelyNumbers[i];
    }

    for(int i = 0; i< 5; i++) {
        cout << lovelyNumbers[i]<<" ";
    }

    for(int i = 0; i< 7; i++) {
        cout << (lovelyNumbers+i)<< " ";
    }

     for(int i = 0; i< 7; i++) {
        cout << *(lovelyNumbers+i)<< " ";
    }

    return 0;
}
