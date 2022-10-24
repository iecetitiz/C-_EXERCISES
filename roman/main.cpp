#include <iostream>
#include <cstring>

using namespace std;

class Roman {
private:
    int number;

public:
    int getNumber() {
        return number;
    }

    void setNumber(int number) {
        this->number = number;   //1-dot ile farki nedir? dot kullansam olmazmi
    }

    //TRY-CATCH in CONSTRUCTOR
    Roman(string romanNumber){ //2-constructor ayni
        try {
            convert(romanNumber); //3-try catch ayni
        } catch (int n) {
            cout<<"You have entered inappropriate value! number set to I..."<<endl; //4-<< sembolleri ne ise yariyor nerelerde kullaniyorum ne amacla kullaniyorum
            number = 1;
        }
    }

    void add(Roman n){ //5-void methodlari ayni
        number = (number + n.getNumber())%10;
    }

    void increment(){
        number++;
        if(number>10){
            number = number%10;
        }
    }

    void decrement(){
        number--;
        if(number<0){
            number = 1;
        }
    }

    //THROW                 //c++'ta switch case sadece int aliyor
    void convert(string x){ // 6- bir method throw yapicaksa throws dememe gerek yok ozaman
        if(x == "I"){number = 1;}
        else if (x == "II"){number = 2;}
        else if (x == "III"){number = 3;}
        else if (x == "IV"){number = 4;}
        else if (x == "V"){number = 5;}
        else if (x == "VI"){number = 6;}
        else if (x == "VII"){number = 7;}
        else if (x == "VIII"){number = 8;}
        else if (x == "IX"){number = 9;}
        else if (x == "X"){number = 10;}
        else{number==-1;throw number;}
    }

};

//
ostream& operator <<(ostream& os, Roman& r) // 7- ostream nedir????
{
    switch(r.getNumber()){
        case 1: os << "I"; break;
        case 2: os << "II"; break;
        case 3: os << "III"; break;
        case 4: os << "IV"; break;
        case 5: os <<  "V"; break;
        case 6: os <<  "VI"; break;
        case 7: os <<  "VII"; break;
        case 8: os <<  "VIII"; break;
        case 9: os <<  "IX"; break;
        case 10: os << "X"; break;
        default: os <<  "Unknown";
    }
    return os;
}

int main()
{
    //STACK
    Roman first = Roman("III"); // 8- stackte yaratmakla heapte yaratmak arasindaki fark nedir
    //HEAP
    Roman *second = new Roman("V");

    cout << first << endl;
    cout << *second << endl;

    first.add(*second);
    cout << first << endl;

    first.increment();
    cout << first << endl;

    second->decrement();
    cout << *second << endl;

    //After answer

    //MALLOC
    Roman* RomanList = (Roman*) malloc(sizeof(Roman) * 3); //burasi java'daki kodlardan farkli olarak yaptigimiz birsey dimi

    RomanList[0] = Roman("I");
    RomanList[1] = Roman("II");
    RomanList[2] = Roman("III");

    //LOOP
    cout<<"Numbers in Roman List: "<< endl;
    for(int i = 0; i < 3; i++){
        cout << RomanList[i]<<" ";
    }

    return 0;
}
