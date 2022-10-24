#include <iostream>
#include "decs.h"

using namespace std;

int main() {
    C c = C();

    cout<<"Please enter the first number:"<<endl;
    int n1;
    cin>>n1;

    cout<<"Please enter the first number:"<<endl;
    int n2;
    cin>>n2;

    A *b;
    b = new B(n1,n2);
    b->caller(c);
    return 0;
}

A::A(int n) {
    n1 = n;
}

void A::caller(C c) {}

B::B(int n, int n2) : A(n) {
    this->n2 = n2;
}

void B::caller(C c) {
    cout<<c.sum(n1,n2)<<endl;
}

int C::sum(int a, int b) {
    return a+b;
}

int C::sum2(B b) {
    return b.n1+b.n2;
}
