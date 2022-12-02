#include <iostream>
#include<list>

using namespace std;

class YouTubeChannel{
public: //by default private
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main()
{
    YouTubeChannel ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideoTitles = {"C++ for beginners", "html&css", "C++ OOP"};


    cout << "Name:" << ytChannel.Name<<endl;
    cout << "Owner Name:" << ytChannel.OwnerName<<endl;
    cout << "Subscriber count:" << ytChannel.SubscribersCount<<endl;
    cout << "Videos:"<<endl;
    for(string VideoTitle: ytChannel.PublishedVideoTitles) {
        cout << VideoTitle<<endl;
    }



    return 0;
}
