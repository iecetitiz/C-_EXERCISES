#include <iostream>

using namespace std;

int getMin(int numbers[], int size) {
int min = numbers[0];
for(int i = 1; i < size; i++) {
    if(numbers[i] < min) {
        min = numbers[i];
    }
}
return min;
}


int getMax(int numbers[], int size) {
int max = numbers[0];
for(int i = 1; i < size; i++) {
    if(numbers[i] > max) {
        max = numbers[i];
    }
}
return max;
}


void getMinAndMax(int numbers[], int size, int* max, int* min) {
    for(int i = 1; i < size; i++) {
    if(numbers[i] > *max) {
        *max = numbers[i];
        }
    if(numbers[i] < *min) {
        *min = numbers[i];
        }
    }
}

int main()
{
    int numbers[5] = {5, 4, -2, 29, 6};
    int max = numbers[0];
    int min = numbers[0];

    getMinAndMax(numbers, 5, &max, &min); //pass by reference

    cout << "min number: "<<getMin(numbers, 5) << endl;
    cout << "max number: "<<getMax(numbers, 5) << endl;

    cout << "---------------" << endl;

    cout << "min number: "<< min << endl;
    cout << "max number: "<<max << endl;

     cout << "-------pointer aritmetic--------" << endl;

     cout << "numbers[0]: "<<numbers[0] << endl;
     cout << "address of numbers[0]: "<<&numbers[0] << endl;
     cout << "address of numbers array: "<<&numbers << endl;
     cout << "address of numbers[1]: "<<*(numbers+1) << endl;

    return 0;
}
