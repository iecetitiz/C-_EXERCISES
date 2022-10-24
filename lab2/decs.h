
//
// Created by user on 12/10/2022.
//

#ifndef SE309_2_DECS_H
#define SE309_2_DECS_H
class B;
class C {
public:
    int sum(int,int);
    int sum2(B b);
};

class A {
protected:
    int n1;
    friend int C::sum2(B);

public:
    A(int n);
    virtual void caller(C c);
};

class B:public A{
private:
    int n2;
    friend int C::sum2(B);
public:
    B(int n, int n2);
    void caller(C c);
};




#endif //SE309_2_DECS_H
