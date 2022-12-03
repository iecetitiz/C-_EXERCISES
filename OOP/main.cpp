#include <iostream>
#include<list>

using namespace std;

class YouTubeChannel{
private: //by default private
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    public:
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void setName(string name) {
    Name =  name;
    }

    string getName() {
    return Name;
    }

     void setOwnerName(string ownerName) {
    OwnerName =  ownerName;
    }

    string getOwnerName() {
    return OwnerName;
    }


    void Subscribe() {
    SubscribersCount++;
    }


    void Unsubscribe() {
        if(SubscribersCount > 0) {
             SubscribersCount--;
        }
    }

    void PublishVideo(string video) {
    PublishedVideoTitles.push_back(video);
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
    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("html&css");
    ytChannel.PublishVideo("C++ OOP");
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    //ytChannel.Name = "CodeBeauty";
    //ytChannel.OwnerName = "Saldina";
    //ytChannel.SubscribersCount = 1800;
    //ytChannel.PublishedVideoTitles = {"C++ for beginners", "html&css", "C++ OOP"};






    return 0;
}
