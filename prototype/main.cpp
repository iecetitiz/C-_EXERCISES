#include <iostream>
#include <stdio.h>

using namespace std;

//function prototype
//WHAT IS IT?
//Function declaration, without a body, before main()
//Ensures that calls to a function are made with the correct arguments.
void hello(char name[], int age);

void introduceMe(string name, string city, int age = 0) {
cout << "My name is " << name << endl;
cout << "I am from " << city << endl;
if(age!= 0)
    cout << "I am " << age << " years old" << endl;
}

int main()
{

    introduceMe("ece", "tukey");
    introduceMe("melis", "adana");

    string name, city;
    int age;
    cout<< "Name" << endl;
    cin >> name;
    cout << "city: ";
    cin >> city;
    cout << "age: ";
    cin>> age;
    introduceMe(name, city, age);


    return 0;

}


void hello(char name[], int age)
{
    cout << "Hello world!"<< age << endl;
    //printf("\nHello %s", name);
    //printf("\nYou are %d years old", age);
}

