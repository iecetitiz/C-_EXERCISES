#include <iostream>
#include<list>

using namespace std;

class YouTubeChannel{
public: //by default private
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo() { //i will run this codes in the object class instead main method
    cout << "Name:" << Name<<endl;
    cout << "Owner Name:" << OwnerName<<endl;
    cout << "Subscriber count:" << SubscribersCount<<endl;
    cout << "Videos:"<<endl;
    for(string VideoTitle: PublishedVideoTitles) {
        cout << VideoTitle<<endl;
    }

    }
};

int main()
{
    YouTubeChannel ytChannel("CodeBeauty", "Saldina"); //icini bos birakamam
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("html&css");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");
    ytChannel.GetInfo();
    //ytChannel.Name = "CodeBeauty";
    //ytChannel.OwnerName = "Saldina";
    //ytChannel.SubscribersCount = 1800;
    //ytChannel.PublishedVideoTitles = {"C++ for beginners", "html&css", "C++ OOP"};






    return 0;
}
