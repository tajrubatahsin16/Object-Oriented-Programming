#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;

class youTubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;

public:
    youTubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setOwnerName(string ownerName){
        OwnerName = ownerName;
    }
    string getOwnerName(){
        return OwnerName;
    }


    void GetInfo(){
        cout<<"Channel Name: "<<Name<<" Owner Name: "<<OwnerName<<" Subscriber count: "<<SubscribersCount<<endl;
    }
    void Subscribe(){
        SubscribersCount++;
    }
    void Unsubscribe(){
        if(SubscribersCount>0)
            SubscribersCount--;
    }
};

int main()
{
    youTubeChannel y1("YT", "Nileema");
    y1.Subscribe();
    y1.Subscribe();
    y1.Subscribe();
    y1.Unsubscribe();
    y1.GetInfo();
    return 0;
}
