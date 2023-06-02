#include<iostream>
#include<list>
using namespace std;

struct YouTubeChannel{
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }
};

ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel){
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscriber: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

struct myCollection{
    list<YouTubeChannel>myChannels;

    void operator+=(YouTubeChannel& yT){
        this->myChannels.push_back(yT);
    }
};

ostream& operator<<(ostream& COUT, myCollection& mCollec){
    for(YouTubeChannel ytChannel:mCollec.myChannels)
        COUT << "CHANNELS: " << ytChannel << endl;
    return COUT;
}
int main()
{
    YouTubeChannel yt1 = YouTubeChannel("YT", 5000);
    YouTubeChannel yt2 = YouTubeChannel("TTN", 50000);
    cout << yt1 << yt2;
    //ANother way
    //operator<<(cout, yt1);
    myCollection mC1;
    mC1 += yt1;
    mC1 += yt2;
    cout << mC1;
    cin.get();
}
