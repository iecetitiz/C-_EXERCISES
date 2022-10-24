#include <iostream>

using namespace std;


//************ call by value (xx0)
//void Increment(int value)
 //  {
   //    value++;
   //}

//***** call by reference (xx1)
//void Increment(int* value)
//{
  //  (*value)++;
//}

int main()
{
    //******** pointer and bu pointerin icindeki deger
   //int var = 8;
   //int* ptr = &var; &'i burda adresi almak icin kullandim
   //*ptr = 10;
   //cout<<*ptr;

   //************** (xx0)
   //int a = 5;
   //Increment(a);
   //cout<<a;


   //************** (xx1)
   //int a = 5;
   //Increment(&a);
   //cout<<a;

   int a = 5;
   int& ref = a; //ellerimle ref'e a"nin anahtarini vermis oldum
   ref = 2;
   cout<<a;




}
