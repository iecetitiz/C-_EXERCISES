#include <iostream>

using namespace std;


 void increment_with_address(int& number)
 {
     cout << number << endl;
 }


int main()
{
    int number = 12;
    increment_with_address(number); //&number yapamiyorum why????
    cout << "Hello world!" << endl;
    return 0;
}
