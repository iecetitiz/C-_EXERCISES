#include <iostream>

using namespace std;

int Multiply(int a, int b)
{
    return a * b;
}

void MultiplyAndLog(int a, int b)
{
    int result = Multiply(a, b);
    cout<<result<<endl;
}

void Log()
{
    cout<<"message"<<endl;
}

int Increment(int* pointer)
{
      return ++(*pointer);

}

int main()
{
    /*
    int variable = 8;
    cout << sizeof(bool) << endl;
    variable += 5;
    cout<< variable<<endl;
    char ch = 65;
    cout<<ch;

//MultiplyAndLog(4, 5);
//Log();

/////////////////////////////// POINTER & REFERENCE ///////////////////////////////
int var = 8;
void* ptr = nullptr;
int* intPtr = &var; // & means, hey, give me your memory address
cout<<*intPtr<<endl; // bu adreste tutulan degeri yazar
*intPtr = 20; // iste burda isler kizisiyo
cout<<var;


int num1 = 30;
int num2 = 40;

int* ptr1 = &num1;
int* ptr2 = &num2;

int a = 5;
int* b = &a; //pointer tanimliyorum
int& ref = a; //reference tanimliyorum

ref = ref + 1;
cout<<ref<<endl;
cout<<a;

int my_number = 555;
int new_number = Increment(&my_number);
cout<<new_number;
*/


/////////////////////////////// USER INPUT ///////////////////////////////
/*




*/

cout<<"enter your name pls: \n";
string name;
cin>>name;
cout<<"your name is: "<<name;







return 0;
}
