#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;

class youTubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    youTubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
    void GetInfo(){
        cout<<"Channel Name: "<<Name<<" Owner Name: "<<OwnerName<<" Subscriber count: "<<SubscribersCount<<endl;
        cout<<"Videos: "<<endl;
        for(string &videoTitle : PublishedVideoTitles){
            cout<<videoTitle<<endl;
        }
    }
};

int main()
{
    youTubeChannel y1("YT", "Nileema");
    y1.PublishedVideoTitles.push_back("C++ video");
    y1.PublishedVideoTitles.push_back("JavaScript video");
    y1.PublishedVideoTitles.push_back("React video");
    y1.GetInfo();
    return 0;
}
