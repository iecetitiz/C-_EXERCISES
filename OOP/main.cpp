#include <iostream>
#include<list>

using namespace std;

class YouTubeChannel{
private: //by default private
    string Name;

    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
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

class CookingYouTubeChannel: public YouTubeChannel{
    public:
    CookingYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){
    }

    void Practice(){
    cout<<OwnerName<<"lets make practice!"<<endl;
    }
};

int main()
{
    YouTubeChannel ytChannel("CodeBeauty", "Saldina"); //icini bos birakamam
    //ytChannel.PublishVideo("C++ for beginners");
    //ytChannel.PublishVideo("html&css");
    //ytChannel.PublishVideo("C++ OOP");
   // ytChannel.Subscribe();
   // ytChannel.Subscribe();
    //ytChannel.Subscribe();
    ////ytChannel.Unsubscribe();
    //ytChannel.GetInfo();

    CookingYouTubeChannel ytChannel2("Amy's Kitchen", "Amy");
    CookingYouTubeChannel ytChannel3("John's Kitchen", "John");
    ytChannel2.PublishVideo("Apple pie");
    ytChannel2.PublishVideo("Chocolate Cake");
    ytChannel2.Subscribe();
    ytChannel2.Subscribe();
    ytChannel2.GetInfo();

    ytChannel2.Practice();
    ytChannel3.Practice();

    //ytChannel.Name = "CodeBeauty";
    //ytChannel.OwnerName = "Saldina";
    //ytChannel.SubscribersCount = 1800;
    //ytChannel.PublishedVideoTitles = {"C++ for beginners", "html&css", "C++ OOP"};
    return 0;
}
