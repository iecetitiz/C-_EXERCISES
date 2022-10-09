#include <iostream>

using namespace std;

int main()
{
    char name[50];
    int age;
    char className[30];
    int grade;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout << "Your name is: "<<name<<" Your age is: "<<age<<endl;
    cout<<"Enter your class and degree: "<<endl;
    cin>>className>>grade;
    cout<<"Your class name is: "<<className<<" Your grade is: "<<grade<<endl;
    return 0;
}
